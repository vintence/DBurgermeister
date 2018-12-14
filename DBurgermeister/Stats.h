#ifndef  STATS_HEADER
#define STATS_HEADER
#include <SFML/Graphics.hpp>

class Stats
{
public:
	Stats();
	~Stats();
	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);

	const float &GetHappiness();
	const float &GetMoney();
	const float &GetIncome();
	const float &GetHouse();
	const float &GetWeaponFactory();
	const float &GetFactory();
	const float &GetEntertainment();
	const float &GetPopulation();
	const float &GetWeaponCount();

	void SetHappiness(float aHappiness);
	void SetMoney(float aMoney);
	void SetIncome(float anIncome);
	void SetHouse(float aHouse);
	void SetWeaponFactory(float aWeaponFactory);
	void SetFactory(float aFactory);
	void SetEntertainment(float aEntertainment);
	void SetPopulation(float aPopulation);
	void SetWeaponCount(float aWeaponCount);

private:
	float happiness = 0;
	float money = 0;
	float income = 0;
	float house = 0;
	float weaponFactory = 0;
	float factory = 0;
	float entertainment = 0;
	float population = 0;
	float weaponCount = 0;
};

#endif // ! STATS_HEADER
