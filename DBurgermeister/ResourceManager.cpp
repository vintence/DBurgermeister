#include "pch.h"
#include "ResourceManager.h"


ResourceManager::ResourceManager()
{
	LoadTexture("cursor", "Resources/kien.png");
	LoadTexture("spritetest", "Resources/spritetest.png");
	LoadTexture("UI1", "Resources/UI.png");
	LoadTexture("Start", "Resources/Start.png");
	LoadTexture("Exit", "Resources/Exit.png");
}

void ResourceManager::LoadTexture(std::string textureName, std::string filename)
{
	sf::Texture tempTexture; //skapar en tom texture så man kan ladda in "filename" på den
	tempTexture.loadFromFile(filename); //laddar in "filename" på den tomma texture
	this->_textures[textureName] = tempTexture; //vi ger _texture som har namnet "name" den texture som vi precis laddar in
}
sf::Texture &ResourceManager::GetTexture(std::string textureName)
{
	return this->_textures.at(textureName); 
}
sf::Sprite &ResourceManager::MakeSprite(std::string texturename, int topleftPosX, int topleftPosY, int sizeWidth, int sizeHeight)
{
	sf::Sprite tempSprite;
	tempSprite = sf::Sprite(GetTexture(texturename));
	tempSprite.setTextureRect(sf::IntRect(topleftPosX, topleftPosY, sizeWidth, sizeHeight));
	return tempSprite;
}

void ResourceManager::LoadFont(std::string name, std::string filename)
{
	sf::Font tempFont;
	tempFont.loadFromFile(filename);
	this->_fonts[name] = tempFont;
}
sf::Font &ResourceManager::GetFont(std::string name)
{
	return this->_fonts.at(name);
}

ResourceManager::~ResourceManager()
{
}
