#ifndef APP_HEADER
#define APP_HEADER

#include "Mouse.h"
#include "Build.h"
#include "Events.h"
#include "UI.h"
#include "Stats.h"


enum GameStates
{
	State_None,
	State_Menu,
	State_Building,
	State_Political
};
class App
{
public:
	App();
	~App();

	void Update(sf::RenderWindow &window);


private:
	Mouse mouse;
	Build build;
	Events events;
	UI ui;
	Stats stats;

	GameStates gameStates;
};

#endif