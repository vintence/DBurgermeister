#ifndef INPUTMANAGER_HEADER
#define INPUTMANAGER_HEADER
#include <SFML/Graphics.hpp>


class InputManager
{
public:
	InputManager();
	~InputManager();

	sf::View view1;

	bool isSpriteClicked(const sf::Sprite &sprite, sf::Mouse::Button mouseButton, sf::RenderWindow &window);
	bool isSpriteCollided(const sf::Sprite &sprite, sf::Mouse::Button mouseButton, sf::RenderWindow &window);
	bool isMouseInsideWindow(sf::RenderWindow &window);
	sf::Vector2i getMousePosition(sf::RenderWindow &window);
};

#endif