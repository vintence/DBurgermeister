#include "pch.h"
#include "Build.h"


Build::Build()
{
	int map[] =
	{
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,3,2,2,1,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,3,0,0,0,1,0,0,0,0,0,0,2,2,2,2,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

	};
	grass = resourceManager.MakeSprite("spritetest", 0, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	water = resourceManager.MakeSprite("spritetest", 32, 0, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	ground = resourceManager.MakeSprite("spritetest", 0, 32, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	stone = resourceManager.MakeSprite("spritetest", 32, 32, 32, 32); //define sprite i classen gör att den inte åker tillbaka till origin efter triggered
	//tile = grass;

	timer = 0;

	int y = 0;
	for (int x = 0; x < 46 || y < 26; x++)
	{
		if (x >= 46)
		{
			x = 0;
			y++;
		}
		int mapTileCount = x + y * 46; //det antal nummer på den tile där
		switch (map[mapTileCount])
		{
			case 0:
			{
				myTiles.push_back(Tile(grass, sf::Vector2f(grass.getPosition().x +128 + (x * grass.getGlobalBounds().width), grass.getPosition().y + (y * grass.getGlobalBounds().height)), Weapon));
				break;
			}
			case 1:
			{
				myTiles.push_back(Tile(water, sf::Vector2f(water.getPosition().x  +128 + (x * water.getGlobalBounds().width), water.getPosition().y + (y * water.getGlobalBounds().height)), Consumer));

				break;
			}
			case 2:
			{
				myTiles.push_back(Tile(ground, sf::Vector2f(ground.getPosition().x +128 + (x * ground.getGlobalBounds().width), ground.getPosition().y + (y * ground.getGlobalBounds().height)), House));

				break;
			}
			case 3:
			{
				myTiles.push_back(Tile(stone, sf::Vector2f(stone.getPosition().x +128 + (x * stone.getGlobalBounds().width), stone.getPosition().y + (y * stone.getGlobalBounds().height)), Stone));

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

	//window.draw(tile);
	//window.draw(grass);
	//window.draw(ground);
	//window.draw(stone);
	//window.draw(water);
}
void Build::Update(sf::RenderWindow &window)
{
	Draw(window);

	//mapWidth = window.getSize().x/32;
	//mapHeight = window.getSize().y/32;
	sf::FloatRect tempMouseCollision;
	for (int i = 0; i < myTiles.size(); i++)
	{
		if (inputManager.isSpriteClicked(myTiles[i].GetSprite(), sf::Mouse::Button::Left, window) && timer <= 0 && myTiles[i].GetType() == Weapon)
		{
			myTiles.push_back(Tile(stone, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Stone));
			std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;

			//std::cout << "tile number: " << i << ". Type: " << myTiles[i].GetType() <<std::endl;
			//do something
			timer = 11000;
			//if (myTiles[i].GetType() == Grass)
			//{
			//	//do more stuuuff
			//	myTiles.push_back(Tile(stone, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Stone));
			//	std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
			//}
			//if (myTiles[i].GetType() == Stone)
			//{
			//	//do more stuuuff
			//	myTiles.push_back(Tile(grass, sf::Vector2f(myTiles[i].GetPosition().x, myTiles[i].GetPosition().y), Grass));
			//	//std::cout << myTiles[i].GetPosition().x << myTiles[i].GetPosition().y << std::endl;
			//}
			//return;
		}

		timer--;
	}
}

Build::~Build()
{
}
