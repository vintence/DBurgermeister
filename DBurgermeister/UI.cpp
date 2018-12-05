#include "pch.h"
#include "UI.h"
#include "ResourceManager.h"
#include "InputManager.h"


UI::UI()
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

	//button
	buttonScale = sf::Vector2f(0.5f, 0.5f);
	weaponButton = ResourceManager::MakeSprite("weaponIcon", 0, 0, 64, 64);
	consumerButton = ResourceManager::MakeSprite("resourceSheet", 384, 0, 128, 128);
	houseButton = ResourceManager::MakeSprite("resourceSheet", 128, 0, 128, 128);
	roadButton = ResourceManager::MakeSprite("resourceSheet", 512, 0, 128, 128);
	entertainButton = ResourceManager::MakeSprite("resourceSheet", 256, 0, 128, 128);
	//weaponButton.setScale(buttonScale);
	weaponButton.setPosition(12, 12);
	consumerButton.setScale(buttonScale);
	consumerButton.setPosition(12, 126);
	houseButton.setScale(buttonScale);
	houseButton.setPosition(12, 252);
	roadButton.setScale(buttonScale);
	roadButton.setPosition(12, 378);
	entertainButton.setScale(buttonScale);
	entertainButton.setPosition(12, 504);

	//text
}

void UI::Draw(sf::RenderWindow &window)
{
	window.draw(Information);
	window.draw(Political);
	window.draw(Political2);
	window.draw(UI1);
	window.draw(Exit);

	window.draw(weaponButton);
	window.draw(consumerButton);
	window.draw(houseButton);
	window.draw(roadButton);
	window.draw(entertainButton);
}
void UI::Update(sf::RenderWindow &window)
{
	Draw(window);
	if (InputManager::isSpriteClicked(Exit, sf::Mouse::Button::Left, window))
	{
		window.close();
	}
}
sf::Sprite UI::GetSpriteButton(int spriteButtonID) //använder för att få spritens properties till att använda i mouse klassen
{
	switch (spriteButtonID)
	{
	case 0:
	{
		return weaponButton;
		break;
	}
	case 1:
	{
		return consumerButton;
		break;
	}
	case 2:
	{
		return houseButton;
		break;
	}
	case 3:
	{
		return roadButton;
		break;
	}
	case 4:
	{
		return entertainButton;
		break;
	}
	}
}



UI::~UI()
{
}