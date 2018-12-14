#ifndef HEADER_UI
#define HEADER_UI
#include <SFML/Graphics.hpp>


enum Type
{
	WeaponButton,
	ConsumerButton,
	HouseButton,
	RoadButton,
	EntertainButton,
	DestroyButton
};

class UI
{
public:
	UI();
	~UI();
	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);

	sf::Sprite GetSprite(Type spriteType);

private:
	sf::Sprite UI1;
	sf::Sprite Information;
	sf::Sprite switchModeButton;
	sf::Sprite endTurnButton;
	sf::Sprite Exit;

	sf::Sprite weaponButton;
	sf::Sprite consumerButton;
	sf::Sprite houseButton;
	sf::Sprite roadButton;
	sf::Sprite entertainButton;
	sf::Sprite destroyButton;
	sf::Vector2f buttonScale;
};

#endif // !HEADER_UI