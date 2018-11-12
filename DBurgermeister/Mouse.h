#ifndef MOUSE_HEADER
#define MOUSE_HEADER
#include <SFML/Graphics.hpp>


class Mouse
{
public:
	Mouse();
	~Mouse();

	sf::Texture texture;
	sf::Sprite cursor;
	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);
};

#endif