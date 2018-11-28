#include "pch.h"
#include "UI.h"
#include "ResourceManager.h"
#include "InputManager.h"
#include "Mouse.h"

Mouse mousE;
ResourceManager resourceManageR;
InputManager inputManageR;

UI::UI()
{
	

}

void UI::Draw(sf::RenderWindow &window)
{
	UI1 = resourceManageR.MakeSprite("UI1", 0, 0, 1000, 128);
	Start = resourceManageR.MakeSprite("Start", 0, 0, 128, 64);
	Exit = resourceManageR.MakeSprite("Exit", 0, 0, 128, 64);

	Exit.setPosition(0.f, 256.f);
	Start.setPosition(0.f, 128.f);


	window.draw(UI1);
	window.draw(Start);
	window.draw(Exit);
}

void UI::Update(sf::RenderWindow &window)
{
	if (inputManageR.isSpriteClicked(Exit, sf::Mouse::Button::Left, window))
	{
		window.close();
	}
	if (inputManageR.isSpriteClicked(Start, sf::Mouse::Button::Left, window))
	{

	}

	Draw(window);
}


UI::~UI()
{
}
