#ifndef BUILD_HEADER
#define BUILD_HEADER
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <vector>


class Build
{
public:
	Build();
	~Build();



	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);
	sf::Sprite GetSpriteButton(int spriteID);


private:

	sf::Sprite weapon;
	sf::Sprite consumer;
	sf::Sprite house;
	sf::Sprite road;
	sf::Sprite entertain;
	sf::Sprite empty;

	sf::Sprite weaponButton;
	sf::Sprite consumerButton;
	sf::Sprite houseButton;
	sf::Sprite roadButton;
	sf::Sprite entertainButton;


	int buildChoice = 5;


	//sf::Sprite tile;
	int mapHeight;
	int mapWidth;
	int spriteOrigin;
	int timer;
	int clickDelay;

	std::vector<Tile> myTiles;
};

#endif