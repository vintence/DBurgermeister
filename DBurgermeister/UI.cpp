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
	UI1 = resourceManageR.MakeSprite("UI1", 0, 0, 128, 832);
	Information = resourceManageR.MakeSprite("Information", 0, 0, 1344, 128);
	Political = resourceManageR.MakeSprite("Political", 0, 0, 128, 128);
	Political2 = resourceManageR.MakeSprite("Political", 0, 0, 128, 128);
	Exit = resourceManageR.MakeSprite("Exit", 0, 0, 128, 32);

	Exit.setPosition(1472.f, 0.f);
	Political.setPosition(0.f, 832.f);
	Political2.setPosition(1472.f, 832);
	Information.setPosition(128.f, 832.f);

	window.draw(Information);
	window.draw(Political);
	window.draw(Political2);
	window.draw(UI1);
	window.draw(Exit);
}

void UI::Update(sf::RenderWindow &window)
{
	if (inputManageR.isSpriteClicked(Exit, sf::Mouse::Button::Left, window))
	{
		window.close();
	}

	Draw(window);
}


UI::~UI()
{
}
