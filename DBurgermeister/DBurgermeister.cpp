#include "pch.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "InputManager.h"
#include "ResourceManager.h"
//#include "Mouse.h"
//#include "Build.h"
//#include "Events.h"
//#include "UI.h"
//#include "Stats.h"
#include "App.h"

int main()
{

	InputManager::Init();
	ResourceManager::Init();

	App app;
	//Mouse mouse;
	//Build build;
	//Events events;
	//UI ui;
	//Stats stats;

	int windowWidth = 1600;
	int windowHeight = 960;
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Der Burgermeister");
	sf::View view1(sf::FloatRect(0.f, 0.f, windowWidth, windowHeight));
	window.setFramerateLimit(144);
	window.setView(view1);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::White);
		window.setMouseCursorVisible(false);
		//code below

		//build.Update(window);
		//ui.Update(window);
		//events.Popup(window);
		//stats.Update(window);
		//mouse.Update(window);
		app.Update(window);

		//code above

		window.display();
	}

	return 0;
}

//hejjehhjejh test branch githubsugerdase