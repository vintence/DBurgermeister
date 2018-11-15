#include "pch.h"
#include "Mouse.h"
#include "ResourceManager.h"
#include "InputManager.h"
#include <iostream>

ResourceManager resourceManager;
InputManager inputManager;
Mouse::Mouse()
{
	spriteOrigin = 0;
	cursor2 = resourceManager.MakeSprite("spritetest", 0, 0, 64, 64); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
}

void Mouse::Draw(sf::RenderWindow &window)
{
	window.draw(cursor);
	window.draw(cursor2);

}
void Mouse::Update(sf::RenderWindow &window)
{
	cursor = resourceManager.MakeSprite("cursor", spriteOrigin, 0, 38.5f, 23); //define sprite i update gör att den åker tillbaka till origin efter triggered
	if (inputManager.isMouseInsideWindow(window))
	{
		cursor.setPosition((sf::Vector2f)inputManager.getMousePosition(window));
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) 
	{
		spriteOrigin = 39;
		std::cout << "work?";
	}
	else
	{
		spriteOrigin = 0;
	}
	if (inputManager.isSpriteClicked(cursor2, sf::Mouse::Button::Left, window))
	{
		if (cursor2.getPosition().x == 0 && cursor2.getPosition().y == 0)
		{
			cursor2.setPosition(window.getSize().x - cursor2.getTextureRect().width, window.getSize().y - cursor2.getTextureRect().height);
		}
		else
		{
			cursor2.setPosition(0, 0);
		}
	}
	Draw(window);
}

Mouse::~Mouse()
{

}
