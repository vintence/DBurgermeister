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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		gameStates = State_Building;
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
		ui.Update(window);
		mouse.Update(window);
		break;
	}
	case State_Building:
	{
		build.Update(window);
		ui.Update(window);
		stats.Update(window);
		mouse.Update(window);
		break;
	}
	case State_Political:
	{
		ui.Update(window);
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
