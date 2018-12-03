#include "pch.h"
#include "Build.h"
#include "ResourceManager.h"
#include "InputManager.h"
#include <iostream> 


Build::Build()
{
	int map[] =
	{
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,10,10,10,10,25,25,10,10,25,25,25,25,25,25,25,25,25,25,25,25,12,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,10,10,10,10,10,10,10,10,25,25,25,25,25,25,25,25,25,12,12,12,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,12,12,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,12,12,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,11,11,25,25,25,25,25,25,12,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,23,23,25,25,25,25,25,25,25,25,25,25,11,11,11,25,25,25,25,25,25,12,12,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,23,23,25,25,25,11,11,11,11,11,11,11,11,11,25,25,25,25,25,25,25,12,12,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,23,23,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,12,12,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,23,23,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,12,12,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,23,23,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,23,23,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,23,23,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,23,23,23,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,23,23,23,23,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
		25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,10,12,11,25,25,25
	};

	tileScale = sf::Vector2f(0.25f, 0.25f);
	buttonScale = sf::Vector2f(0.5f, 0.5f);

	//weapon = ResourceManager::MakeSprite("spritesheet", 320, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//consumer = ResourceManager::MakeSprite("spritesheet", 352, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//house = ResourceManager::MakeSprite("spritesheet", 384, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//road = ResourceManager::MakeSprite("spritesheet", 320, 32, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//entertain = ResourceManager::MakeSprite("spritesheet", 352, 32, 32, 32);
	//empty = ResourceManager::MakeSprite("spritesheet", 384, 32, 32, 32);
	weapon = ResourceManager::MakeSprite("resourceSheet", 0, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	weapon.setScale(tileScale);
	consumer = ResourceManager::MakeSprite("resourceSheet", 384, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	consumer.setScale(tileScale);
	house = ResourceManager::MakeSprite("resourceSheet", 128, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	house.setScale(tileScale);
	road = ResourceManager::MakeSprite("resourceSheet", 512, 0, 128, 128); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	road.setScale(tileScale);
	entertain = ResourceManager::MakeSprite("resourceSheet", 256, 0, 128, 128);
	entertain.setScale(tileScale);
	empty = ResourceManager::MakeSprite("resourceSheet", 640, 0, 128, 128);
	empty.setScale(tileScale);

	weaponButton = ResourceManager::MakeSprite("resourceSheet", 0, 0, 128, 128);
	consumerButton = ResourceManager::MakeSprite("resourceSheet", 384, 0, 128, 128);
	houseButton = ResourceManager::MakeSprite("resourceSheet", 128, 0, 128, 128);
	roadButton = ResourceManager::MakeSprite("resourceSheet", 512, 0, 128, 128);
	entertainButton = ResourceManager::MakeSprite("resourceSheet", 256, 0, 128, 128);
	weaponButton.setScale(buttonScale);
	weaponButton.setPosition(12, 12);
	consumerButton.setScale(buttonScale);
	consumerButton.setPosition(12, 126);
	houseButton.setScale(buttonScale);
	houseButton.setPosition(12, 252);
	roadButton.setScale(buttonScale);
	roadButton.setPosition(12, 378);
	entertainButton.setScale(buttonScale);
	entertainButton.setPosition(12, 504);


	timer = 0;
	clickDelay = 5000;

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
		case 10:
		{
			myTiles.push_back(Tile(weapon, sf::Vector2f(weapon.getPosition().x + 128 + (x * weapon.getGlobalBounds().width), weapon.getPosition().y + (y * weapon.getGlobalBounds().height)), Weapon));
			break;
		}
		case 11:
		{
			myTiles.push_back(Tile(consumer, sf::Vector2f(consumer.getPosition().x + 128 + (x * consumer.getGlobalBounds().width), consumer.getPosition().y + (y * consumer.getGlobalBounds().height)), Consumer));

			break;
		}
		case 12:
		{
			myTiles.push_back(Tile(house, sf::Vector2f(house.getPosition().x + 128 + (x * house.getGlobalBounds().width), house.getPosition().y + (y * house.getGlobalBounds().height)), House));

			break;
		}
		case 23:
		{
			myTiles.push_back(Tile(road, sf::Vector2f(road.getPosition().x + 128 + (x * road.getGlobalBounds().width), road.getPosition().y + (y * road.getGlobalBounds().height)), Road));

			break;
		}
		case 24:
		{
			myTiles.push_back(Tile(entertain, sf::Vector2f(entertain.getPosition().x + 128 + (x * entertain.getGlobalBounds().width), entertain.getPosition().y + (y * entertain.getGlobalBounds().height)), Entertain));

			break;
		}
		case 25:
		{
			myTiles.push_back(Tile(empty, sf::Vector2f(empty.getPosition().x + 128 + (x * empty.getGlobalBounds().width), empty.getPosition().y + (y * empty.getGlobalBounds().height)), Empty));

			break;
		}
		}
	}
	/*for (int i = 0; i < 10; i++)
	{
		myTiles.push_back(Tile(water));
	}*/

}

void Build::Draw(sf::RenderWindow &window)
{
	for (int i = 0; i < myTiles.size(); i++)
	{
		window.draw(myTiles[i].GetSprite());
	}

	window.draw(weaponButton);
	window.draw(consumerButton);
	window.draw(houseButton);
	window.draw(roadButton);
	window.draw(entertainButton);

	//window.draw(grass);
	//window.draw(ground);
	//window.draw(stone);
	//window.draw(water);
}
sf::Sprite Build::GetSpriteButton(int spriteButtonID)
{
	switch (spriteButtonID)
	{
	case 0:
	{
		return weaponButton;
		break;
	}
	case 1:
	{
		return consumerButton;
		break;
	}
	case 2:
	{
		return houseButton;
		break;
	}
	case 3:
	{
		return roadButton;
		break;
	}
	case 4:
	{
		return entertainButton;
		break;
	}
	}
}
void Build::Update(sf::RenderWindow &window)
{
	Draw(window);

	//mapWidth = window.getSize().x/32;
	//mapHeight = window.getSize().y/32;
	sf::FloatRect tempMouseCollision;
	for (int i = 0; i < myTiles.size(); i++)
	{
		if (InputManager::isSpriteClicked(weaponButton, sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 0)
		{
			buildChoice = 0;
			timer = clickDelay;
			std::cout << "choice 0\n";
		}
		else if (InputManager::isSpriteClicked(consumerButton, sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 1)
		{
			buildChoice = 1;
			timer = clickDelay;
			std::cout << "choice 1\n";
		}
		else if (InputManager::isSpriteClicked(houseButton, sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 2)
		{
			buildChoice = 2;
			timer = clickDelay;
			std::cout << "choice 2\n";
		}
		else if (InputManager::isSpriteClicked(roadButton, sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 3)
		{
			buildChoice = 3;
			timer = clickDelay;
			std::cout << "choice 3\n";
		}
		else if (InputManager::isSpriteClicked(entertainButton, sf::Mouse::Button::Left, window) && timer <= 0 && buildChoice != 4)
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
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Weapon)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(road, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Road)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(weapon, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Weapon);
					std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
			case 1:
			{
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Consumer)
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
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != House)
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
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Road)
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
				if (InputManager::isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() != Entertain)
				{
					timer = clickDelay;
					//myTiles.push_back(Tile(house, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), House)); //skapa en ny lager av tile på den ställe
					myTiles[i] = Tile(entertain, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Entertain);
					std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
				}
				break;
			}
		}
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

Build::~Build()
{
}
