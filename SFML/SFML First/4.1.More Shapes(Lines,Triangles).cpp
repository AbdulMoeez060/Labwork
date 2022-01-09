#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/Window.hpp>
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(720, 480), "Shapes", Style::Default);
	window.setFramerateLimit(60);
	CircleShape tri(100.f);
	tri.setPointCount(3);
	tri.setFillColor(Color::Cyan);
	Vertex line[] = { Vertex(Vector2f(100.f,400.f)),Vertex(Vector2f(50.f,100.f)) };
	ConvexShape convex;
	convex.setPosition(Vector2f(400.f, 50.f));
	convex.setPointCount(5);
	
	convex.setPoint(0, Vector2f(0.f, 0.f));
	convex.setPoint(1, Vector2f(400.f, 100.f));
	convex.setPoint(2, Vector2f(150.f, 10.f));
	convex.setPoint(3, Vector2f(350.f, 82.f));
	convex.setPoint(4, Vector2f(0.f, 50.f));

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

		//Edit
		tri.move(Vector2f(1.f, 0.5f));

		
		//Draw
		window.clear();
			

		//Draw Stuff
		window.draw(tri);
		window.draw(convex);
		window.draw(line,2,Lines);


		window.display();
	}
	return 0;
}