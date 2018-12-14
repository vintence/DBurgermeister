#include "pch.h"
#include "UI.h"
#include "ResourceManager.h"
#include "InputManager.h"


UI::UI()
{
	UI1 = ResourceManager::MakeSprite("UI1", 0, 0, 128, 832);
	Information = ResourceManager::MakeSprite("Information", 0, 0, 1344, 128);
	switchModeButton = ResourceManager::MakeSprite("buildModeButton", 0, 0, 128, 128);
	endTurnButton = ResourceManager::MakeSprite("endTurnButton", 0, 0, 128, 128);
	Exit = ResourceManager::MakeSprite("Exit", 0, 0, 128, 32);
	Exit.setPosition(1472.f, 0.f);
	switchModeButton.setPosition(0.f, 832.f);
	endTurnButton.setPosition(1472.f, 832);
	Information.setPosition(128.f, 832.f);

	//button
	buttonScale = sf::Vector2f(0.5f, 0.5f);
	weaponButton = ResourceManager::MakeSprite("weaponIcon", 0, 0, 64, 64);
	consumerButton = ResourceManager::MakeSprite("consumerIcon", 0, 0, 64, 64);
	houseButton = ResourceManager::MakeSprite("resourceSheet", 128, 0, 128, 128);
	roadButton = ResourceManager::MakeSprite("roadIcon", 0, 0, 64, 64);
	entertainButton = ResourceManager::MakeSprite("entertainmentIcon", 0, 0, 64, 64);
	destroyButton = ResourceManager::MakeSprite("destroyIcon", 0, 0, 64, 64);
	//weaponButton.setScale(buttonScale);
	weaponButton.setPosition(12, 12);
	consumerButton.setPosition(12, 126);
	houseButton.setScale(buttonScale);
	houseButton.setPosition(12, 252);
	roadButton.setPosition(12, 378);
	entertainButton.setPosition(12, 504);
	destroyButton.setPosition(12, 630);
}

void UI::Draw(sf::RenderWindow &window)
{
	window.draw(Information);
	window.draw(switchModeButton);
	window.draw(endTurnButton);
	window.draw(UI1);
	window.draw(Exit);

	window.draw(weaponButton);
	window.draw(consumerButton);
	window.draw(houseButton);
	window.draw(roadButton);
	window.draw(entertainButton);
	window.draw(destroyButton);
}
void UI::Update(sf::RenderWindow &window)
{
	Draw(window);
	if (InputManager::isSpriteClicked(Exit, sf::Mouse::Button::Left, window))
	{
		window.close();
	}
}
sf::Sprite UI::GetSprite(Type spriteType) //använder för att få spritens properties till att använda i mouse klassen
{
	switch (spriteType)
	{
	case WeaponButton:
	{
		return weaponButton;
		break;
	}
	case ConsumerButton:
	{
		return consumerButton;
		break;
	}
	case HouseButton:
	{
		return houseButton;
		break;
	}
	case RoadButton:
	{
		return roadButton;
		break;
	}
	case EntertainButton:
	{
		return entertainButton;
		break;
	}
	case DestroyButton:
	{
		return destroyButton;
		break;
	}
	}
}



UI::~UI()
{
}