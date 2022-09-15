#include "Main_Menu.h"




Main_Menu::Main_Menu(float width, float height)
{
	if (!font.loadFromFile("Chrusty.ttf"))
	{
		std::cout << "Fond didn't Load" << std::endl;
	}

	if (!font2.loadFromFile("Typo.ttf"))
	{
		std::cout << "Fond didn't Load" << std::endl;
	}

	
	headline.setFont(font);
	headline.setString("Backbencher");
	headline.setStyle(sf::Text::Bold);
	headline.setStyle(sf::Text::Italic);
	headline.setCharacterSize(70);
	headline.setFillColor(sf::Color::Color(155,0,0,255));
	headline.setPosition(sf::Vector2f((width / 2) - 73, height / (Main_Menu_Opt + 1)*0.5 ));
	

	menu[0].setFont(font2);
	menu[0].setCharacterSize(40);
	menu[0].setFillColor(sf::Color::Cyan);
	menu[0].setString("As Teacher");
	menu[0].setPosition(sf::Vector2f((width / 2)+50, height / (Main_Menu_Opt+1) * 1.5));


	menu[1].setFont(font2);
	menu[1].setCharacterSize(40);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("As Student");
	menu[1].setPosition(sf::Vector2f((width / 2) + 50, height / (Main_Menu_Opt + 1) * 2.2));


	menu[2].setFont(font2);
	menu[2].setCharacterSize(40);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("Exit");
	menu[2].setPosition(sf::Vector2f((width / 2) + 50, height / (Main_Menu_Opt + 1) * 2.9));

	menuIndex = 0;


}

Main_Menu::Main_Menu()
{

}


Main_Menu::~Main_Menu()
{

}

void Main_Menu::draw(sf::RenderWindow& window)
{
	window.draw(headline);
	for (int i = 0; i < Main_Menu_Opt; i++)
	{
		window.draw(menu[i]);
	}
}

void Main_Menu::MoveUp()
{
	if ((menuIndex - 1) >= 0)
	{
		menu[menuIndex].setFillColor(sf::Color::White);
		menuIndex--;
		menu[menuIndex].setFillColor(sf::Color::Cyan);
	}
}

void Main_Menu::MoveDown()
{
	if ((menuIndex + 1) <Main_Menu_Opt)
	{
		menu[menuIndex].setFillColor(sf::Color::White);
		menuIndex++;
		menu[menuIndex].setFillColor(sf::Color::Cyan);
	}
}

int Main_Menu::getPressed()
{
	return menuIndex;
}

