#ifndef MENU_HEADER
#define MENU_HEADER
#include <SFML/Graphics.hpp>

class Menu
{
public:
	Menu();
	~Menu();

	void UpdateMenu(sf::RenderWindow &window);
	void DrawMenu(sf::RenderWindow &window);

	sf::Sprite Start;
	sf::Sprite Exit;

};

#endif