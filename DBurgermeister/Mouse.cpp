#include "pch.h"
#include "Mouse.h"
#include <iostream>
#include "ResourceManager.h"
#include "InputManager.h"



Mouse::Mouse()
{
	spriteOrigin = 0;
	//cursor2 = resourceManager.MakeSprite("spritetest", 0, 0, 64, 64); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	iconMiddle = sf::Vector2f(32/2, 32/2);
	iconScale = sf::Vector2f(0.5f, 0.5f);
	iconOrigin = sf::Vector2f(-(64*iconScale.x), -(64*iconScale.y));
	weaponIcon = build.GetSpriteButton(0);
	weaponIcon.scale(iconScale);
	weaponIcon.setPosition(iconOrigin);
	consumerIcon = build.GetSpriteButton(1);
	consumerIcon.scale(iconScale);
	consumerIcon.setPosition(iconOrigin);
	houseIcon = build.GetSpriteButton(2);
	houseIcon.scale(iconScale);
	houseIcon.setPosition(iconOrigin);
	roadIcon = build.GetSpriteButton(3);
	roadIcon.scale(iconScale);
	roadIcon.setPosition(iconOrigin);
	entertainIcon = build.GetSpriteButton(4);
	entertainIcon.scale(iconScale);
	entertainIcon.setPosition(iconOrigin);

}

void Mouse::Draw(sf::RenderWindow &window)
{
	window.draw(weaponIcon);
	window.draw(consumerIcon);
	window.draw(houseIcon);
	window.draw(roadIcon);
	window.draw(entertainIcon);
	window.draw(cursor);

}
void Mouse::Update(sf::RenderWindow &window)
{
	Draw(window);
	cursor = ResourceManager::MakeSprite("cursor", spriteOrigin, 0, 38.5f, 23); //define sprite i update gör att den åker tillbaka till origin efter triggered

	if (InputManager::isMouseInsideWindow(window))
	{
		cursor.setPosition(sf::Vector2f(InputManager::getMousePosition(window)));
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) 
	{
		spriteOrigin = 39;
		//std::cout << "work?";
	}
	else
	{
		spriteOrigin = 0;
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (InputManager::isSpriteClicked(build.GetSpriteButton(i), sf::Mouse::Button::Left, window))
		{
			isBuildingSelected = i;
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Right))
		{
			isBuildingSelected = 5;
		}
	}
	switch (isBuildingSelected)
	{
	default:
	{
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
		break;
	}
	case 0:
	{
		weaponIcon.setPosition(sf::Vector2f(InputManager::getMousePosition(window).x - iconMiddle.x, InputManager::getMousePosition(window).y - iconMiddle.y));
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
		break;
	}
	case 1:
	{
		consumerIcon.setPosition(sf::Vector2f(InputManager::getMousePosition(window).x - iconMiddle.x, InputManager::getMousePosition(window).y - iconMiddle.y));
		weaponIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
		break;
	}
	case 2:
	{
		houseIcon.setPosition(sf::Vector2f(InputManager::getMousePosition(window).x - iconMiddle.x, InputManager::getMousePosition(window).y - iconMiddle.y));
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
		break;
	}
	case 3:
	{
		roadIcon.setPosition(sf::Vector2f(InputManager::getMousePosition(window).x - iconMiddle.x, InputManager::getMousePosition(window).y - iconMiddle.y));
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
		break;
	}
	case 4:
	{
		entertainIcon.setPosition(sf::Vector2f(InputManager::getMousePosition(window).x - iconMiddle.x, InputManager::getMousePosition(window).y - iconMiddle.y));
		roadIcon.setPosition(iconOrigin);
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		break;
	}
	}
	/*if (isBuildingSelected == 0)
	{
		weaponIcon.setPosition(sf::Vector2f(inputManager.getMousePosition(window).x - iconMiddle.x, inputManager.getMousePosition(window).y - iconMiddle.y));
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
	}
	else if (isBuildingSelected == 1)
	{
		consumerIcon.setPosition(sf::Vector2f(inputManager.getMousePosition(window).x - iconMiddle.x, inputManager.getMousePosition(window).y - iconMiddle.y));
		weaponIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
	}
	else if (isBuildingSelected == 2)
	{
		houseIcon.setPosition(sf::Vector2f(inputManager.getMousePosition(window).x - iconMiddle.x, inputManager.getMousePosition(window).y - iconMiddle.y));
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
	}
	else if (isBuildingSelected == 3)
	{
		roadIcon.setPosition(sf::Vector2f(inputManager.getMousePosition(window).x - iconMiddle.x, inputManager.getMousePosition(window).y - iconMiddle.y));
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
	}
	else if (isBuildingSelected == 4)
	{
		entertainIcon.setPosition(sf::Vector2f(inputManager.getMousePosition(window).x - iconMiddle.x, inputManager.getMousePosition(window).y - iconMiddle.y));
		roadIcon.setPosition(iconOrigin);
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
	}
	else
	{
		weaponIcon.setPosition(iconOrigin);
		consumerIcon.setPosition(iconOrigin);
		houseIcon.setPosition(iconOrigin);
		roadIcon.setPosition(iconOrigin);
		entertainIcon.setPosition(iconOrigin);
	}*/

}

Mouse::~Mouse()
{

}
