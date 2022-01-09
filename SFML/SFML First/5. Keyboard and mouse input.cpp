#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(720, 480), "Input", Style::Default);
	window.setFramerateLimit(60);



	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
			/*if (event.type==Event::KeyReleased && event.key.code==Keyboard::Escape)
			{
				window.close();
			}*/
			/*if (event.type==Event::MouseButtonPressed && event.mouseButton.button==Mouse::Left)
			{
				window.close();
			}*/
		}

		/*if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}*/
		if (Mouse::isButtonPressed(Mouse::Right))
		{
			window.close();
		}
		//Edit
		

		//Draw
		window.clear();


		//Draw Stuff
		


		window.display();
	}
	return 0;
}