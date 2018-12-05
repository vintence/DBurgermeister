#ifndef MOUSE_HEADER
#define MOUSE_HEADER
#include <SFML/Graphics.hpp>
#include "Build.h"
#include "UI.h"


class Mouse
{
UI ui;
Build build;
public:
	

	Mouse();
	~Mouse();

	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);

private:
	sf::Sprite cursor;

	sf::Sprite weaponIcon;
	sf::Sprite consumerIcon;
	sf::Sprite houseIcon;
	sf::Sprite roadIcon;
	sf::Sprite entertainIcon;
	sf::Vector2f iconScale;
	sf::Vector2f iconMiddle;
	sf::Vector2f iconOrigin;

	sf::Vector2f mousePosWindow;
	int spriteOrigin;
	int isBuildingSelected = 5;
};

#endif