#include "pch.h"
#include "player.h"



Player::Player()
{
	
	playerTexture.loadFromFile("ani.png");
	frame = sf::Vector2i(0, 0);
	playerSprite = sf::Sprite(playerTexture);
	playerSprite.setTextureRect(sf::IntRect(frame.x, frame.y, 80, 100));

	//playerSprite.setPosition(200.f, 200.f);


}
Player::~Player()
{
}

void Player::updateMouse()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		frame.x = 80;
		playerSprite.setTextureRect(sf::IntRect(frame.x, frame.y, 80, 100));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		frame.x = 160;
		playerSprite.setTextureRect(sf::IntRect(frame.x, frame.y, 80, 100));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		frame.x = 240;
		playerSprite.setTextureRect(sf::IntRect(frame.x, frame.y, 80, 100));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
	{
		frame.x = 320;
		playerSprite.setTextureRect(sf::IntRect(frame.x, frame.y, 80, 100));
	}

	//playerSprite.setPosition(100.f, 100.f);
	sf::Vector2i mousePos = sf::Mouse::getPosition();
	cursor.setPosition((float)mousePos.x, (float)mousePos.y);

}
void Player::Draw(sf::RenderWindow &aWindow)
{
	aWindow.draw(playerSprite);
}