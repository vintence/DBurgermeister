#include "pch.h"
#include "InputManager.h"


InputManager::InputManager()
{
}

bool InputManager::isSpriteClicked(sf::Sprite sprite, sf::Mouse::Button mouseButton, sf::RenderWindow &window)
{
	sf::IntRect spriteRect(sprite.getPosition().x, sprite.getPosition().y, sprite.getPosition().x + sprite.getTextureRect().width*sprite.getScale().x, sprite.getPosition().y + sprite.getTextureRect().height*sprite.getScale().y); //hämta spritens storlek
	//if (sf::Mouse::isButtonPressed(mouseButton))
	//{
	//	if (spriteRect.contains((sf::Vector2i)getMousePosition(window))) //om musen är inom spritens storlek return true
	//	{
	//		return true;
	//	}
	//}
	if (spriteRect.contains(getMousePosition(window)))
	{
		if (sf::Mouse::isButtonPressed(mouseButton))
		{
			return true;
		}
	}
	return false;
}
bool InputManager::isMouseInsideWindow(sf::RenderWindow &window)
{
	sf::IntRect windowRect(0, 0, window.getSize().x, window.getSize().y);
	if (windowRect.contains(getMousePosition(window)))
	{
		return true;
	}
	return false;
}
sf::Vector2i InputManager::getMousePosition(sf::RenderWindow &window)
{
	return sf::Mouse::getPosition(window);
}

InputManager::~InputManager()
{
}
