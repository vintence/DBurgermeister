#ifndef RESOURCEMANAGER_HEADER
#define	RESOURCEMANAGER_HEADER
#include <SFML/Graphics.hpp>

class ResourceManager
{
public:
	ResourceManager();
	~ResourceManager();

	void LoadTexture(std::string textureName, std::string filename);
	sf::Texture &GetTexture(std::string textureName);
	sf::Sprite &MakeSprite(std::string texturename, int topleftPosX, int topleftPosY, int sizeWidth, int sizeHeight); //g�r en sprite utav en av texture som vi har laddat in. 

	void LoadFont(std::string fontName, std::string filename);
	sf::Font &GetFont(std::string fontName);


private:
	std::map<std::string, sf::Texture>_textures; //en container/lista typ, en _textures ska inneh�lla ett string(namn p� det vi laddar in) och ett texture
	std::map<std::string, sf::Font>_fonts;
};

#endif // !RESOURCEMANAGER_HEADER
