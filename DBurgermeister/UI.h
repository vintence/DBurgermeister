#ifndef HEADER_UI
#define HEADER_UI
#include <SFML/Graphics.hpp>


class UI
{
public:
	UI();
	~UI();
	void Update(sf::RenderWindow &window);
	void Draw(sf::RenderWindow &window);
	sf::Sprite GetSpriteButton(int spriteID);

private:
	sf::Sprite UI1;
	sf::Sprite Information;
	sf::Sprite Political;
	sf::Sprite Political2;
	sf::Sprite Exit;

	sf::Sprite weaponButton;
	sf::Sprite consumerButton;
	sf::Sprite houseButton;
	sf::Sprite roadButton;
	sf::Sprite entertainButton;
	sf::Vector2f buttonScale;
};

#endif // !HEADER_UI