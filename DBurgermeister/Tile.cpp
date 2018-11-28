#include "pch.h"
#include "Tile.h"


Tile::Tile()
{

}

Tile::Tile(const sf::Sprite &sprite, const sf::Vector2f &position, const TileType &type)
{
	mySprite = sprite;
	mySprite.setPosition(position);
	myPosition = position;
	myType = type;

	if (type == Weapon)
	{
		//Stats för Weapon factory
		weaponPoint = 10;
		population = -10;
		moneyPoint = 10;
		cost = 150;

	}
	else if (type == House)
	{
		//Stats för Hus
		weaponPoint = 0;
		population = 5;
		moneyPoint = 0;
		cost = 50;
	}
	else if (type == Consumer)
	{
		//Stats för Consumer Building
		weaponPoint = 0;
		population = -5;
		moneyPoint = 50;
		cost = 150;
	}
}
Tile::~Tile()
{

}

const int & Tile::GetCost()
{
	return cost;
}
const int & Tile::GetWeaponPoint()
{
	return weaponPoint;
}
const int & Tile::GetPopulation()
{
	return population;
}
const int & Tile::GetMoneyPoint()
{
	return moneyPoint;
}

const sf::Sprite & Tile::GetSprite()
{
	return mySprite;
}

const sf::Vector2f & Tile::GetPosition()
{
	return myPosition;
}

const TileType & Tile::GetType()
{
	return myType;
}
