#include "pch.h"
#include "Mouse.h"
#include <iostream>


Mouse::Mouse()
{
}

void Mouse::Draw(sf::RenderWindow &window)
{
	texture.loadFromFile("Resources/spritetest.png");
	cursor = sf::Sprite(texture);
	cursor.setTextureRect(sf::IntRect(0, 0, 32, 32));
	window.draw(cursor);
	//window.draw(sf::CircleShape(10, 10));
}
void Mouse::Update(sf::RenderWindow &window)
{
	Draw(window);
}

Mouse::~Mouse()
{

}
