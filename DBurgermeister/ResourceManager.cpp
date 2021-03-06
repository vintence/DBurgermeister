#include "pch.h"
#include "ResourceManager.h"
#include <iostream>
#include <fstream>
#include <cstdlib>


std::map<std::string, sf::Texture> ResourceManager::_textures;
std::map<std::string, sf::Font> ResourceManager::_fonts;
void ResourceManager::Init()
{
	LoadTexture("cursor", "Resources/kien.png");
	LoadTexture("resourceSheet", "Resources/TileSheet.png");
	LoadTexture("backgroundPicture", "Resources/BackgroundPic.png");
	LoadTexture("menuStart", "Resources/menuStart.png");
	LoadTexture("menuOption", "Resources/menuOption.png");
	LoadTexture("menuExit", "Resources/menuExit.png");
	LoadTexture("Exit", "Resources/Exit.png");
	LoadTexture("Start", "Resources/Start.png");
	LoadTexture("UI1", "Resources/BuildMenu.png");
	LoadTexture("Information", "Resources/Information.png");
	LoadTexture("Political", "Resources/Political.png");
	LoadTexture("weaponIcon","Resources/weaponIcon.png");
	LoadTexture("destroyIcon", "Resources/destroyIcon.png");
	LoadTexture("entertainmentIcon", "Resources/entertainmentIcon.png");
	LoadTexture("consumerIcon", "Resources/consumerIcon.png");
	LoadTexture("roadIcon", "Resources/roadIcon.png");
	LoadTexture("endTurnButton", "Resources/endTurnButton.png");
	LoadTexture("buildModeButton", "Resources/buildModeButton.png");
	LoadTexture("eventCard", "Resources/EventPopUp.png");
	LoadTexture("button", "Resources/CheckBox.png");


	LoadFont("font", "Resources/testingFont.ttf");
	LoadFont("titleFont", "Resources/Pride.otf");
	LoadFont("textFont", "Resources/PERI.ttf");
}

void ResourceManager::LoadTexture(std::string textureName, std::string fileName)
{
	sf::Texture tempTexture; //skapar en tom texture s� man kan ladda in "filename" p� den
	tempTexture.loadFromFile(fileName); //laddar in "filename" p� den tomma texture
	_textures[textureName] = tempTexture; //vi ger _texture som har namnet "name" den texture som vi precis laddar in
}
sf::Texture &ResourceManager::GetTexture(std::string textureName)
{
	return _textures.at(textureName); 
}
sf::Sprite &ResourceManager::MakeSprite(std::string textureName, int topleftPosX, int topleftPosY, int sizeWidth, int sizeHeight)
{
	sf::Sprite tempSprite;
	tempSprite = sf::Sprite(GetTexture(textureName));
	tempSprite.setTextureRect(sf::IntRect(topleftPosX, topleftPosY, sizeWidth, sizeHeight));
	return tempSprite;
}

void ResourceManager::LoadFont(std::string name, std::string fileName)
{
	sf::Font tempFont;
	tempFont.loadFromFile(fileName);
	_fonts[name] = tempFont;
}
sf::Font &ResourceManager::GetFont(std::string name)
{
	return _fonts.at(name);
}

ResourceManager::~ResourceManager()
{
}
