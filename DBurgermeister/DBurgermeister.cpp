#include "pch.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Mouse.h"
#include "UI.h"

int main()
{
	Mouse mouse;
	UI Ui;

	int windowWidth = 1600;
	int windowHeight = 960;
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML works!");
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Black);
		window.setMouseCursorVisible(false);
		//code below
		mouse.Update(window);
		Ui.Draw(window);
		Ui.Update(window);
		//code above

		window.display();
	}

	return 0;
}

//hejjehhjejh test branch githubsugerdase