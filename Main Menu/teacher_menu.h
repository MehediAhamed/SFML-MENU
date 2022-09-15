#pragma once
#include "Main_Menu.h"
#define t_opt 8

//Inheritance from Main Menu
class teacher_menu : public  Main_Menu
{
private:


	int t_menuIndex;

	sf::Text t_menu[t_opt];



public:

	teacher_menu(float width, float height);
	~teacher_menu();
	void draw2(sf::RenderWindow& window1);
	void MoveUp();
	void MoveDown();
	int getPressed();

	void t_display(sf::RenderWindow& window);


};



