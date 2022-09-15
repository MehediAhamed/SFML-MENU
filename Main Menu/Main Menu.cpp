#include<SFML/Graphics.hpp>
#include<iostream>
#include "Main_Menu.h"
#include "student_menu.h"
#include "teacher_menu.h"


int main()
{
	//Main Menu window size and object declaration
	sf::RenderWindow window(sf::VideoMode(1100, 750), "Main Menu");
	Main_Menu menu(window.getSize().x, window.getSize().y);
    
	//student object
	student_menu s2(window.getSize().x, window.getSize().y);;


	//teacher object
	teacher_menu t2(window.getSize().x, window.getSize().y);;


	//for main menu
	sf::RectangleShape background;
	background.setSize(sf::Vector2f(1500, 750)); 
	sf::Texture MainTexture;
	MainTexture.loadFromFile("back.jpg");
	background.setTexture(&MainTexture);

	





	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.MoveUp();
					break;
				case sf::Keyboard::Down:
					menu.MoveDown();
					break;
				case sf::Keyboard::Return:
					switch (menu.getPressed())
					{
					case 0:
						
						//std::cout << "Teacher is pressed" << std::endl;
						t2.t_display(window);
						break;

					case 1:
					
						//std::cout << "student is pressed" << std::endl;
						s2.s_display(window);
						
						break;

					case 2:
						window.close();
						break;
					}
					break;
				}



				break;

			case sf::Event::Closed:window.close();
				break;
			}

		}
		window.clear();
		window.draw(background);
		
		menu.draw(window);
		window.display();

	}
}