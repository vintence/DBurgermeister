#ifndef MOUSE_HEADER
#define MOUSE_HEADER
#include <SFML/Graphics.hpp>
#include "ResourceManager.h"

class Mouse
{
public:
	ResourceManager resourceManager;

	Mouse();
	~Mouse();

	sf::Sprite cursor;
	sf::Sprite cursor2;
	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);
	sf::Vector2f mousePosWindow;
	int spriteOrigin;
};

#endif