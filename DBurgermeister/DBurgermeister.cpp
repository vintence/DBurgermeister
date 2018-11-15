#include "pch.h"
#include "player.h"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");
	Player player;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		player.updateMouse();

		player.Draw(window);

		window.display();


	}

	return 0;
}