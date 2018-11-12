#include "pch.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Mouse.h"

int main()
{
	Mouse mouse;

	int windowWidth = 1000;
	int windowHeight = 1000;
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "SFML works!");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();

		//code below
		mouse.Update(window);
		//mouse.Draw(window);
		//code above

		window.display();
	}

	return 0;
}