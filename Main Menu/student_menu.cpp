#include "student_menu.h"




student_menu::student_menu(float width, float height):Main_Menu()
{
	if (!font.loadFromFile("Typo.ttf"))
	{
		std::cout << "Fond didn't Load" << std::endl;
	}
	s_menu[0].setFont(font);
	s_menu[0].setCharacterSize(35);
	s_menu[0].setFillColor(sf::Color::Red);
	s_menu[0].setString("Class Schedule");
	s_menu[0].setPosition(sf::Vector2f((width / 2)-30 , height / (s_opt + 1) * 2.5));


	s_menu[1].setFont(font);
	s_menu[1].setCharacterSize(35);
	s_menu[1].setFillColor(sf::Color::White);
	s_menu[1].setString("Quiz Syllabus");
	//s_menu[1].setPosition(sf::Vector2f((width / 2) + 60, height / (s_opt + 1) * 1.5));
	s_menu[1].setPosition(sf::Vector2f((width / 2) + 250, height / (s_opt + 1) * 2.5));

	s_menu[2].setFont(font);
	s_menu[2].setCharacterSize(35);
	s_menu[2].setFillColor(sf::Color::White);
	s_menu[2].setString("Notice");
	s_menu[2].setPosition(sf::Vector2f((width / 2) - 30, height / (s_opt + 1) * 3.5));


	s_menu[3].setFont(font);
	s_menu[3].setCharacterSize(35);
	s_menu[3].setFillColor(sf::Color::White);
	s_menu[3].setString("Video chat");
	s_menu[3].setPosition(sf::Vector2f((width / 2) + 250, height / (s_opt + 1) * 3.5));


	s_menu[4].setFont(font);
	s_menu[4].setCharacterSize(35);
	s_menu[4].setFillColor(sf::Color::White);
	s_menu[4].setString("Ask Teacher");
	s_menu[4].setPosition(sf::Vector2f((width / 2) - 30, height / (s_opt + 1) * 4.5));


	s_menu[5].setFont(font);
	s_menu[5].setCharacterSize(35);
	s_menu[5].setFillColor(sf::Color::White);
	s_menu[5].setString("Attendance");
	s_menu[5].setPosition(sf::Vector2f((width / 2) + 250, height / (s_opt + 1) * 4.5));

	s_menu[6].setFont(font);
	s_menu[6].setCharacterSize(35);
	s_menu[6].setFillColor(sf::Color::Cyan);
	s_menu[6].setString("Back");
	s_menu[6].setPosition(sf::Vector2f((width / 2) -10, height / (s_opt + 1) * 6));


	s_menu[7].setFont(font);
	s_menu[7].setCharacterSize(35);
	s_menu[7].setFillColor(sf::Color::Cyan);
	s_menu[7].setString("Quit");
	s_menu[7].setPosition(sf::Vector2f((width / 2) + 290, height / (s_opt + 1) * 6));

	s_menuIndex = 0;
	
}




void student_menu::draw2(sf::RenderWindow& window)
{
	for (int i = 0; i < s_opt; i++)
	{
		window.draw(s_menu[i]);
	}
}

void student_menu::MoveUp()
{
	if ((s_menuIndex - 1) >= 0)
	{
		s_menu[s_menuIndex].setFillColor(sf::Color::White);
		s_menuIndex--;
		s_menu[s_menuIndex].setFillColor(sf::Color::Red);

	


	
	}
}
//function overriding
	void student_menu::MoveDown()
	{
		if ((s_menuIndex + 1) < s_opt)
		{
			s_menu[s_menuIndex].setFillColor(sf::Color::White);
			s_menuIndex++;
			s_menu[s_menuIndex].setFillColor(sf::Color::Red);

		
			
		}
	}
	//function overriding
int student_menu::getPressed()
{
	return s_menuIndex;
}




student_menu::~student_menu()
{

}



void student_menu::s_display(sf::RenderWindow& window)
{

	//for student menu
	sf::RectangleShape s_background1, s_background2;
	s_background1.setSize(sf::Vector2f(400, 800));
	s_background2.setSize(sf::Vector2f(1300,800));
	//s_background2.setFillColor(sf::Color::Color(245, 161, 66,250));
	sf::Texture s_MainTexture, s_MainTexture2;
	
	s_MainTexture.loadFromFile("school6.png");
	s_MainTexture2.loadFromFile("s_back3.jpg");

	s_background1.setTexture(&s_MainTexture);
	s_background2.setTexture(&s_MainTexture2);



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			switch (event.type)
			{
			case sf::Event::KeyReleased :
				switch (event.key.code)
				{
				case sf::Keyboard::Up :
					MoveUp();
					break;
				case sf::Keyboard::Down :
					MoveDown();
					break;
				case sf::Keyboard::Return:
					switch (getPressed())
					{
					case 0:

						std::cout << "Teacher is pressed" << std::endl;

						break;

					case 1:

						std::cout << "student is pressed" << std::endl;


						break;




					case 2:

						std::cout << "Teacher is pressed" << std::endl;

						break;

					case 3:

						std::cout << "student is pressed" << std::endl;


						break;
                    



					case 4:

						std::cout << "Teacher is pressed" << std::endl;

						break;

					case 5:

						std::cout << "student is pressed" << std::endl;


						break;
					
					case 6:

						std::cout << "Teacher is pressed" << std::endl;

						break;

				
					
					
					case 7:
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
		window.draw(s_background2);
		window.draw(s_background1);
		

		draw2(window);
		window.display();

	}
}