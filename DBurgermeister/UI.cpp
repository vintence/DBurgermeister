#include "pch.h"
#include "UI.h"
#include "ResourceManager.h"
#include "InputManager.h"


UI::UI()
{


}

void UI::Draw(sf::RenderWindow &window)
{
	UI1 = ResourceManager::MakeSprite("UI1", 0, 0, 128, 832);
	Information = ResourceManager::MakeSprite("Information", 0, 0, 1344, 128);
	Political = ResourceManager::MakeSprite("Political", 0, 0, 128, 128);
	Political2 = ResourceManager::MakeSprite("Political", 0, 0, 128, 128);
	Exit = ResourceManager::MakeSprite("Exit", 0, 0, 128, 32);

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
	Draw(window);
	if (InputManager::isSpriteClicked(Exit, sf::Mouse::Button::Left, window))
	{
		window.close();
	}

	Draw(window);
}


UI::~UI()
{
}