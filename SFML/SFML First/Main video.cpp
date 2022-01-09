#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(1920, 1080), "SFML-LINK", Style::Default);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type==Event::Closed)
			{
				window.close();
			}
		}
		//Update




		//Draw
		window.clear();


		//Draw Stuff
		window.display();



	}
	return 0;
}