#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#define Main_Menu_Opt 3
class Main_Menu
{
protected:
		int menuIndex;
		sf::Font font, font2;
		sf::Text menu[Main_Menu_Opt];
		sf::Text headline;
		

public:
	Main_Menu();
	Main_Menu(float width, float height);
	~Main_Menu();

	void draw(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();
	int getPressed();
	


};


