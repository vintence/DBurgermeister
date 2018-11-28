#include "pch.h"
#include "Buildings.h"


Buildings::Buildings()
{
}


Buildings::~Buildings()
{
}

void Buildings::Initialize(Type type)
{
	if (type == Weapon)
	{
		//Stats för Weapon factory
		WeaponP = 10;
		Pop = -10;
		MoneyP = 10;
		Cost = 150;

	}
	else if (type == House)
	{
		//Stats för Hus
		WeaponP = 0;
		Pop = 5;
		MoneyP = 0;
		Cost = 50;
	}
	else if (type == Consumer)
	{
		//Stats för Consumer Building
		WeaponP = 0;
		Pop = -5;
		MoneyP = 50;
		Cost = 150;
	}
}

void Buildings::BuildingStats()
{
}

int Buildings::getMoneyP()
{
	return MoneyP;
}

int Buildings::getWeaponP()
{
	return WeaponP;
}

int Buildings::getPop()
{
	return Pop;
}