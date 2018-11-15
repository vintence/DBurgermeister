#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	~Player();

	void updateMouse();
	void Draw(sf::RenderWindow &aWindow);


private:
	//sf::Sprite playerSprite;
	
	sf::Vector2i frame;
	sf::Sprite cursor;

	sf::Texture playerTexture;
	sf::Sprite playerSprite;

};

