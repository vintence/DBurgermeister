#include "pch.h"
#include "Build.h"
#include "ResourceManager.h"
#include "InputManager.h"
#include <iostream> 

Build::Build()
{
	int map[] =
	{
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
		5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
	};

	weaponText.setFont(ResourceManager::GetFont("font"));
	weaponText.setCharacterSize(30);
	weaponText.setFillColor(sf::Color::Black);
	weaponText.setPosition(1300, 910);
	weaponCountText = '0';
	weaponLabel.setFont(ResourceManager::GetFont("font"));
	weaponLabel.setCharacterSize(30);
	weaponLabel.setFillColor(sf::Color::Black);
	weaponLabel.setPosition(1160, 910);
	weaponLabel.setString("Weapon(s):");


	tileScale = sf::Vector2f(0.25f, 0.25f);

	//weapon = ResourceManager::MakeSprite("spritesheet", 320, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//consumer = ResourceManager::MakeSprite("spritesheet", 352, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//house = ResourceManager::MakeSprite("spritesheet", 384, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//road = ResourceManager::MakeSprite("spritesheet", 320, 32, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//entertain = ResourceManager::MakeSprite("spritesheet", 352, 32, 32, 32);
	//empty = ResourceManager::MakeSprite("spritesheet", 384, 32, 32, 32);
	weapon = ResourceManager::MakeSprite("resourceSheet", 0, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	consumer = ResourceManager::MakeSprite("resourceSheet", 384, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	house = ResourceManager::MakeSprite("resourceSheet", 128, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	road = ResourceManager::MakeSprite("resourceSheet", 512, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	entertain = ResourceManager::MakeSprite("resourceSheet", 256, 0, 128, 128);
	empty = ResourceManager::MakeSprite("resourceSheet", 640, 0, 128, 128);
	weapon.setScale(tileScale);
	consumer.setScale(tileScale);
	house.setScale(tileScale);
	road.setScale(tileScale);
	entertain.setScale(tileScale);
	empty.setScale(tileScale);

	//clickdelay efter varje click, så att man inte råka klickar 2 gånger på en sak samtidigt.
	timer = 0;
	clickDelay = 1;

	//ritar ut banan efter map
	int tileCountWidth = 46;
	int tileCountHeight = 25; //ska vara 1 från totalen pga börjar från 0
	int y = 0;
	for (int x = 0; x < tileCountWidth || y < tileCountHeight; x++) 
	{
		if (x >= tileCountWidth)
		{
			x = 0;
			y++;
		}
		int mapTileCount = x + y * tileCountWidth; //det antal nummer på den tile där
		switch (map[mapTileCount])
		{
		case 0:
		{
			myTiles.push_back(Tile(weapon, sf::Vector2f(weapon.getPosition().x + 128 + (x * weapon.getGlobalBounds().width), weapon.getPosition().y + (y * weapon.getGlobalBounds().height)), Weapon));
			break;
		}
		case 3:
		{
			myTiles.push_back(Tile(consumer, sf::Vector2f(consumer.getPosition().x + 128 + (x * consumer.getGlobalBounds().width), consumer.getPosition().y + (y * consumer.getGlobalBounds().height)), Consumer));

			break;
		}
		case 1:
		{
			myTiles.push_back(Tile(house, sf::Vector2f(house.getPosition().x + 128 + (x * house.getGlobalBounds().width), house.getPosition().y + (y * house.getGlobalBounds().height)), House));

			break;
		}
		case 4:
		{
			myTiles.push_back(Tile(road, sf::Vector2f(road.getPosition().x + 128 + (x * road.getGlobalBounds().width), road.getPosition().y + (y * road.getGlobalBounds().height)), Road));

			break;
		}
		case 2:
		{
			myTiles.push_back(Tile(entertain, sf::Vector2f(entertain.getPosition().x + 128 + (x * entertain.getGlobalBounds().width), entertain.getPosition().y + (y * entertain.getGlobalBounds().height)), Entertain));

			break;
		}
		case 5:
		{
			myTiles.push_back(Tile(empty, sf::Vector2f(empty.getPosition().x + 128 + (x * empty.getGlobalBounds().width), empty.getPosition().y + (y * empty.getGlobalBounds().height)), Empty));

			break;
		}
		}
	}
	//ritar ut banan efter map

}

void Build::Draw(sf::RenderWindow &window)
{
	for (int i = 0; i < myTiles.size(); i++)
	{
		window.draw(myTiles[i].GetSprite());
	}
	window.draw(weaponText);
	window.draw(weaponLabel);
}
void Build::Update(sf::RenderWindow &window)
{
	Draw(window);
	sf::FloatRect tempMouseCollision;

	weaponText.setString(weaponCountText);

	//om man clicka på en byggnad händer 
	for (int i = 0; i < myTiles.size(); i++) //for loopen går genom alla tile på mappen.
	{
		if (InputManager::isSpriteClicked(ui.GetSpriteButton(0), sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 0)
		{
			buildChoice = 0;
			timer = clickDelay;
			std::cout << "choice 0\n";
		}
		else if (InputManager::isSpriteClicked(ui.GetSpriteButton(1), sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 1)
		{
			buildChoice = 1;
			timer = clickDelay;
			std::cout << "choice 1\n";
		}
		else if (InputManager::isSpriteClicked(ui.GetSpriteButton(2), sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 2)
		{
			buildChoice = 2;
			timer = clickDelay;
			std::cout << "choice 2\n";
		}
		else if (InputManager::isSpriteClicked(ui.GetSpriteButton(3), sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 3)
		{
			buildChoice = 3;
			timer = clickDelay;
			std::cout << "choice 3\n";
		}
		else if (InputManager::isSpriteClicked(ui.GetSpriteButton(4), sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 4)
		{
			buildChoice = 4;
			timer = clickDelay;
			std::cout << "choice 3\n";
		}
		else if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Right) && timer <= 0 && buildChoice != 5)
		{
			buildChoice = 5;
			timer = clickDelay;
			std::cout << "choice 5\n";
		}
		switch (buildChoice)
		{
			case 0:
			{
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Weapon && myTiles[i].GetType() != Consumer && myTiles[i].GetType() != House && myTiles[i].GetType() != Road && myTiles[i].GetType() != Entertain)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(road, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Road)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(weapon, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Weapon);

					weaponCount += 1;
					weaponPoint = weaponCount * myTiles[i].GetMoneyCost();
					weaponCountText = std::to_string(weaponPoint);

					stats.SetHappiness((float)weaponPoint);

					std::cout << stats.GetHappiness();

					//std::cout << weaponCount << std::endl;
					//std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
			case 1:
			{
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Weapon && myTiles[i].GetType() != Consumer && myTiles[i].GetType() != House && myTiles[i].GetType() != Road && myTiles[i].GetType() != Entertain)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(house, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), House)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(consumer, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Consumer);
					std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
			case 2:
			{
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Weapon && myTiles[i].GetType() != Consumer && myTiles[i].GetType() != House && myTiles[i].GetType() != Road && myTiles[i].GetType() != Entertain)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(house, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), House)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(house, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), House);
					std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
			case 3:
			{
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Weapon && myTiles[i].GetType() != Consumer && myTiles[i].GetType() != House && myTiles[i].GetType() != Road && myTiles[i].GetType() != Entertain)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(house, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), House)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(road, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Road);
					std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
			case 4:
			{
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Weapon && myTiles[i].GetType() != Consumer && myTiles[i].GetType() != House && myTiles[i].GetType() != Road && myTiles[i].GetType() != Entertain)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(house, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), House)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(entertain, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Entertain);
					std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
		}
		//om man clicker en byggnad händer

		//if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice == 1)
		//{
		//	myTiles.push_back(Tile(stone, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Stone));
		//	std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;

		//	//std::cout << "tile number: " << i << ". Type: " << myTiles[i].GetType() <<std::endl;
		//	//do something
		//	timer = 11000;
		//	//if (myTiles[i].GetType() == Grass)
		//	//{
		//	//	//do more stuuuff
		//	//	myTiles.push_back(Tile(stone, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Stone));
		//	//	std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
		//	//}
		//	//if (myTiles[i].GetType() == Stone)
		//	//{
		//	//	//do more stuuuff
		//	//	myTiles.push_back(Tile(grass, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Grass));
		//	//	//std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
		//	//}
		//	//return;
		//}
		timer--;
	}
}
int Build::GetWeaponCountPoint()
{
	return weaponPoint;
}

Build::~Build()
{
}
