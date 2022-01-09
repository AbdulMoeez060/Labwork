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

	CircleShape circle(50.f);
	circle.setPosition(Vector2f(0.f, 0.f));//Every shape has a lot of fucntions like this
	circle.setFillColor(Color::Blue);
	circle.setOutlineColor(Color::Black);
	circle.setOutlineThickness(1.8f);

	RectangleShape rect(Vector2f(150.f, 100.f));//Sfml has a Vector2f that ha two floats in at as Vector2f(x,y) along the axis similarly they also have a Vecor 2i
	rect.setPosition(Vector2f(250.f, 150.f));
	rect.setFillColor(Color::Black);
	rect.setOutlineColor(Color::Blue);
	rect.setOutlineThickness(1.8f);

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
		circle.move(0.5f, 0.1f);
		circle.rotate(2.f);

		rect.move(-0.5f, -0.1f);
		rect.rotate(1.f);

		//Draw
		window.clear(Color::White);


		//Draw Stuff
		window.draw(circle);
		window.draw(rect);

		window.display();



	}
	return 0;
}