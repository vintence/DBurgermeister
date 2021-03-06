#ifndef BUILD_HEADER
#define BUILD_HEADER
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <vector>
#include "UI.h"
#include "Stats.h"


class Build
{
public:
	Build();
	~Build();



	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);
	//sf::Sprite GetSpriteButton(int spriteID);
	int GetWeaponCountPoint();

private:
	Stats stats;
	UI ui;

	sf::Sprite weapon;
	sf::Sprite consumer;
	sf::Sprite house;
	sf::Sprite road;
	sf::Sprite entertain;
	sf::Sprite empty;

	int weaponCount = 0;
	int weaponPoint = 0;
	std::string weaponCountText;
	sf::Text weaponText;
	sf::Text weaponLabel;
	int populationCount = 0;
	std::string populationCountText;
	sf::Text populationText;
	sf::Text populationLabel;

	int buildChoice = 6;


	//sf::Sprite tile;
	int spriteOrigin;
	int timer;
	int clickDelay;
	sf::Vector2f tileScale;

	std::vector<Tile> myTiles;
};

#endif