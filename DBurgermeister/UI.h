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
enum InterFaces
{
	BuildingInterfaceUi,
	PoliticalInterfaceUi,
	MenuInterfaceUi
};

class UI
{
public:
	UI();
	~UI();
	void Update(sf::RenderWindow &window, InterFaces anInterface);
	void Draw(sf::RenderWindow &window, InterFaces anInterface);

	sf::Sprite GetSprite(Type spriteType);

private:
	sf::Sprite leftPanel;
	sf::Sprite information;
	sf::Sprite switchModeButton;
	sf::Sprite endTurnButton;
	sf::Sprite exit;

	sf::Sprite menuStart;
	sf::Sprite menuOption;
	sf::Sprite menuExit;
	sf::Sprite menuBackground;

	sf::Sprite weaponButton;
	sf::Sprite consumerButton;
	sf::Sprite houseButton;
	sf::Sprite roadButton;
	sf::Sprite entertainButton;
	sf::Sprite destroyButton;
	sf::Vector2f buttonScale;
};

#endif // !HEADER_UI