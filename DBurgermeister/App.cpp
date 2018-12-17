#include "pch.h"
#include "App.h"


App::App()
{
}


App::~App()
{

}

void App::Update(sf::RenderWindow &window)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		gameStates = State_Building;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
	{
		gameStates = State_Menu;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
	{
		gameStates = State_Political;
	}

	switch (gameStates)
	{
	case State_None:
	{
		mouse.Update(window);
		break;
	}
	case State_Menu:
	{
		ui.Update(window, MenuInterfaceUi);
		mouse.Update(window);
		break;
	}
	case State_Building:
	{
		build.Update(window);
		ui.Update(window, BuildingInterfaceUi);
		stats.Update(window);
		mouse.Update(window);
		break;
	}
	case State_Political:
	{
		ui.Update(window, PoliticalInterfaceUi);
		events.Popup(window);
		stats.Update(window);
		mouse.Update(window);
		break;
	}
	default:
	{
		mouse.Update(window);
		break;
	}
	}
}
