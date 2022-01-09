#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(720, 480), "First Shape", Style::Default);
	window.setFramerateLimit(60);

	CircleShape circle(150.f);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
		}
		//Update
		
		circle.move(0.5f, 0.f);



		//Draw
		window.clear(Color::Cyan);


		//Draw Stuff
		window.draw(circle);

		window.display();



	}
	return 0;
}