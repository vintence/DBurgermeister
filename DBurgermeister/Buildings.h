#ifndef BUILDINGS_HEADER
#define BUILDINGS_HEADER
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

enum Type
{
	Weapon,
	Consumer,
	House,
};

class Buildings
{
public:
	Buildings();
	~Buildings();


	//Funktioner för Enemies
	void Initialize(Type type);
	void BuildingStats();

	
	int getMoneyP();
	int getWeaponP();
	int getPop();

	inline const int& getMoneyP() const { return this->MoneyP; }
	inline const int& getWeaponP() const { return this->WeaponP; }
	inline const int& getCost() const { return this->Cost; }





private:

	double yPos;
	double xPos;

	std::string name;


	int WeaponP;
	int MoneyP;
	int Cost;
	int Pop;

};

#endif // ! BUILDINGS_HEADER
