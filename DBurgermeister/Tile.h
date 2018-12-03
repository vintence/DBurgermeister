#ifndef TILE_HEADER
#define TILE_HEADER
#include <SFML/Graphics.hpp>


enum TileType
{
	House,
	Consumer,
	Weapon,
	Road,
	Entertain,
	Empty
};

class Tile
{
public:
	Tile();
	Tile(const sf::Sprite &sprite, const sf::Vector2f &position, const TileType &type);
	~Tile();

	const sf::Sprite &GetSprite();
	const sf::Vector2f &GetPosition();
	const TileType &GetType();
	const int &GetCost();
	const int &GetWeaponPoint();
	const int &GetPopulation();
	const int &GetMoneyPoint();

private:
	sf::Sprite mySprite;
	sf::Vector2f myPosition;
	TileType myType;

	int weaponPoint;
	int population;
	int moneyPoint;
	int cost;
};

#endif