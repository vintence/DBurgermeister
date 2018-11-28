#ifndef BUILD_HEADER
#define BUILD_HEADER
#include <SFML/Graphics.hpp>
#include "ResourceManager.h"
#include "InputManager.h"
#include "Tile.h"
#include <vector>

class Build
{
public:
	ResourceManager resourceManager;
	InputManager inputManager;

	Build();
	~Build();



	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);


private:

	sf::Sprite water;
	sf::Sprite grass;
	sf::Sprite ground;
	sf::Sprite stone;


	//sf::Sprite tile;
	int mapHeight;
	int mapWidth;
	int spriteOrigin;
	int timer;

	std::vector<Tile> myTiles;
};

#endif