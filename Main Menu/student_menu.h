#pragma once
#include "Main_Menu.h"
#define s_opt 8

//Inheritance from Main Menu
class student_menu : public  Main_Menu
{
private:
	

	int s_menuIndex;

	sf::Text s_menu[s_opt];



public:

	student_menu(float width, float height);
	~student_menu();
	void draw2(sf::RenderWindow& window1);
	void MoveUp();
	void MoveDown();
	int getPressed();

	void s_display(sf::RenderWindow& window);


};



