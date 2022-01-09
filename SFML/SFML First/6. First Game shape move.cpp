#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>

using namespace sf;

void draw(RenderWindow &window, RectangleShape& square);
void update(int &keytime,RectangleShape& square, RenderWindow& window);


int main()
{
	int keytime = 8;
	RenderWindow window(VideoMode(640, 480), "Simple Game");
	window.setFramerateLimit(60);
	RectangleShape square(Vector2f(100.f, 100.f));
	square.setFillColor(Color::Black);
	square.setPosition(window.getSize().x/2, window.getSize().y/2);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
			if (event.KeyPressed && event.key.code==Keyboard::Escape)
			{
				window.close();
			}
		}
		//Edit
		
		update(keytime,square,window);

		draw(window,square);

		
	}
	return 0;

}
void draw(RenderWindow& window, RectangleShape& square)
{
	window.clear(Color::Cyan);
	window.draw(square);
	window.display();
}
void update(int &keytime, RectangleShape &square,RenderWindow& window)
{
	if (keytime<8)
	{
		keytime++;
	}
	if (Keyboard::isKeyPressed(Keyboard::A) && square.getPosition().x>0)
	{
		square.move(-5.f, 0.f);
		keytime = 0;
	}
	if (Keyboard::isKeyPressed(Keyboard::D) && square.getPosition().x + square.getPosition().x < window.getSize().x)
	{
		square.move(5.f, 0.f);
	}
	if (Keyboard::isKeyPressed(Keyboard::W) && square.getPosition().y>0 )
	{
		square.move(0.f, -5.f);
		keytime = 0;
	}
	if (Keyboard::isKeyPressed(Keyboard::S) && square.getPosition().y + square.getPosition().y < window.getSize().y)
	{
		square.move(0.f, 5.f);
		keytime = 0;
	}
	if (Mouse::isButtonPressed(Mouse::Left) )
	{
		square.setFillColor(Color::White);
	}
	else
	{
		square.setFillColor(Color::Black);
	}
}