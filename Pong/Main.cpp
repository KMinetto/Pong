#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

Event event;

int main()
{
	RenderWindow window(VideoMode(200, 200), "SFML works !");
	CircleShape shape(100.f);
	shape.setFillColor(Color::Green);

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(shape);
		window.display();
	}

	return EXIT_SUCCESS;
}