#ifndef EVENT_HEADER
#define EVENT_HEADER
#include <SFML/Graphics.hpp>

class Events
{
public:
	Events();
	~Events();

	void Popup(sf::RenderWindow &window);
	void GetCard();

	bool show; //If the cards should be printed or not.
	int eventTitle, eventText, option1Text, option2Text;

	sf::Text titleText;
	sf::Text text;
	sf::Text optionText1;
	sf::Text optionText2;

	//All the event Texts, including options
	sf::String eventTitleList[4];
	sf::String eventFlavor[21];
	sf::String option1[21];
	sf::String option2[21];


	int button1Frame = 43;
	int button2Frame = 43;
	int spriteOrigin;
	sf::Sprite eventBackground;
	sf::Sprite button1, button2;

	//ATTACK OF THE CLONES
	void event1Option1();
	void event1Option2();

	void event2Option1();
	void event2Option2();

	void event3Option1();
	void event3Option2();

	void event4Option1();
	void event4Option2();

	void event5Option1();
	void event5Option2();

	void event6Option1();
	void event6Option2();

	void event7Option1();
	void event7Option2();

	void event8Option1();
	void event8Option2();

	void event9Option1();
	void event9Option2();

	void event10Option1();
	void event10Option2();

	void event12Option1();
	void event12Option2();

	void event13Option1();
	void event13Option2();

	void event14Option1();
	void event14Option2();

};
#endif