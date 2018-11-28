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
	sf::Sprite UI1;
	sf::Sprite Start;
	sf::Sprite Exit;
};

#endif // !HEADER_UI