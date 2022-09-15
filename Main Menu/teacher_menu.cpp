#include "teacher_menu.h"




teacher_menu::teacher_menu(float width, float height) :Main_Menu()
{
	if (!font.loadFromFile("Typo.ttf"))
	{
		std::cout << "Fond didn't Load" << std::endl;
	}
	t_menu[0].setFont(font);
	t_menu[0].setCharacterSize(35);
	t_menu[0].setFillColor(sf::Color::Red);
	t_menu[0].setString("Class Schedule");
	t_menu[0].setPosition(sf::Vector2f((width / 2) - 30, height / (t_opt + 1) * 2.5));


	t_menu[1].setFont(font);
	t_menu[1].setCharacterSize(35);
	t_menu[1].setFillColor(sf::Color::White);
	t_menu[1].setString("Quiz Syllabus");
	//s_menu[1].setPosition(sf::Vector2f((width / 2) + 60, height / (s_opt + 1) * 1.5));
	t_menu[1].setPosition(sf::Vector2f((width / 2) + 250, height / (t_opt + 1) * 2.5));

	t_menu[2].setFont(font);
	t_menu[2].setCharacterSize(35);
	t_menu[2].setFillColor(sf::Color::White);
	t_menu[2].setString("Send Notice");
	t_menu[2].setPosition(sf::Vector2f((width / 2) - 30, height / (t_opt + 1) * 3.5));


	t_menu[3].setFont(font);
	t_menu[3].setCharacterSize(35);
	t_menu[3].setFillColor(sf::Color::White);
	t_menu[3].setString("Video Chat");
	t_menu[3].setPosition(sf::Vector2f((width / 2) + 250, height / (t_opt + 1) * 3.5));


	t_menu[4].setFont(font);
	t_menu[4].setCharacterSize(35);
	t_menu[4].setFillColor(sf::Color::White);
	t_menu[4].setString("Texting");
	t_menu[4].setPosition(sf::Vector2f((width / 2) - 30, height / (t_opt + 1) * 4.5));


	t_menu[5].setFont(font);
	t_menu[5].setCharacterSize(35);
	t_menu[5].setFillColor(sf::Color::White);
	t_menu[5].setString("Attendance");
	t_menu[5].setPosition(sf::Vector2f((width / 2) + 250, height / (t_opt + 1) * 4.5));

	t_menu[6].setFont(font);
	t_menu[6].setCharacterSize(35);
	t_menu[6].setFillColor(sf::Color::Cyan);
	t_menu[6].setString("Back");
	t_menu[6].setPosition(sf::Vector2f((width / 2) - 10, height / (t_opt + 1) * 6));


	t_menu[7].setFont(font);
	t_menu[7].setCharacterSize(35);
	t_menu[7].setFillColor(sf::Color::Cyan);
	t_menu[7].setString("Quit");
	t_menu[7].setPosition(sf::Vector2f((width / 2) + 290, height / (t_opt + 1) * 6));

	t_menuIndex = 0;

}




void teacher_menu::draw2(sf::RenderWindow& window)
{
	for (int i = 0; i < t_opt; i++)
	{
		window.draw(t_menu[i]);
	}
}

void teacher_menu::MoveUp()
{
	if ((t_menuIndex - 1) >= 0)
	{
		t_menu[t_menuIndex].setFillColor(sf::Color::White);
		t_menuIndex--;
		t_menu[t_menuIndex].setFillColor(sf::Color::Red);





	}
}
//function overriding
void teacher_menu::MoveDown()
{
	if ((t_menuIndex + 1) < t_opt)
	{
		t_menu[t_menuIndex].setFillColor(sf::Color::White);
		t_menuIndex++;
		t_menu[t_menuIndex].setFillColor(sf::Color::Red);



	}
}
//function overriding
int teacher_menu::getPressed()
{
	return t_menuIndex;
}




teacher_menu::~teacher_menu()
{

}



void teacher_menu::t_display(sf::RenderWindow& window)
{

	//for student menu
	sf::RectangleShape t_background1, t_background2;
	//t_background1.setSize(sf::Vector2f(470, 750));
	t_background2.setSize(sf::Vector2f(1300, 800));
	

	sf::Texture t_MainTexture, t_MainTexture2;

	//t_MainTexture.loadFromFile("teacher3.png");
	t_MainTexture2.loadFromFile("teacher4.png");

	//t_background1.setTexture(&t_MainTexture);
	t_background2.setTexture(&t_MainTexture2);



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
					MoveUp();
					break;
				case sf::Keyboard::Down:
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
		window.draw(t_background2);
		//window.draw(t_background1);


		draw2(window);
		window.display();

	}
}