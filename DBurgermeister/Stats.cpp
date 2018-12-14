#include "pch.h"
#include "Stats.h"
#include <iostream>


Stats::Stats()
{
}


Stats::~Stats()
{
}

void Stats::Update(sf::RenderWindow & window)
{
}

void Stats::Draw(sf::RenderWindow & window)
{
}

const float &Stats::GetHappiness()
{
	return happiness;
}

const float & Stats::GetMoney()
{
	return money;
}

const float & Stats::GetIncome()
{
	return income;
}

const float & Stats::GetHouse()
{
	return house;
}

const float & Stats::GetWeaponFactory()
{
	return weaponFactory;
}

const float & Stats::GetFactory()
{
	return factory;
}

const float & Stats::GetEntertainment()
{
	return entertainment;
}

const float & Stats::GetPopulation()
{
	return population;
}

const float & Stats::GetWeaponCount()
{
	return weaponCount;
}

void Stats::SetHappiness(float aHappiness)
{
	happiness = aHappiness;
}

void Stats::SetMoney(float aMoney)
{
	money = aMoney;
}

void Stats::SetIncome(float anIncome)
{
	income = anIncome;
}

void Stats::SetHouse(float aHouse)
{
	house = aHouse;
}

void Stats::SetWeaponFactory(float aWeaponFactory)
{
	weaponFactory = aWeaponFactory;
}

void Stats::SetFactory(float aFactory)
{
	factory = aFactory;
}

void Stats::SetEntertainment(float aEntertainment)
{
	entertainment = aEntertainment;
}

void Stats::SetPopulation(float aPopulation)
{
	population = aPopulation;
}

void Stats::SetWeaponCount(float aWeaponCount)
{
	weaponCount = aWeaponCount;
}
