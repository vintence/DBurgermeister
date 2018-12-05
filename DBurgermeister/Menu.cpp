#include "pch.h"
#include "Menu.h"
#include "ResourceManager.h"
#include "InputManager.h"
#include "Mouse.h"

ResourceManager resourceManagEr;
InputManager inputManagEr;



Menu::Menu()
{
}

void Menu::DrawMenu(sf::RenderWindow &window)
{
	Exit = resourceManagEr.MakeSprite("Exit", 0, 0, 128, 32);


}

void Menu::UpdateMenu(sf::RenderWindow &window)
{

	if (inputManagEr.isSpriteClicked(Exit, sf::Mouse::Button::Left, window))
	{
		window.close();
	}
	
	DrawMenu(window);

}


Menu::~Menu()
{
}
