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

	switch (type)
	{
	case Weapon:
	{
		weaponPoint = 10;
		population = -10;
		moneyPoint = 10;
		cost = 150;
		break;
	}
	case House:
	{
		weaponPoint = 0;
		population = 5;
		moneyPoint = 0;
		cost = 50;
		break;
	}
	case Consumer:
	{
		weaponPoint = 0;
		population = -5;
		moneyPoint = 50;
		cost = 150;
		break;
	}
	case Road:
	{
		cost = 10;
		break;
	}
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

void Tile::SetNew(const sf::Sprite & sprite, const sf::Vector2f & position, const TileType & type)
{
	mySprite = sprite;
	myPosition = position;
	myType = type;
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
