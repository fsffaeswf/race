#include <SFML/Graphics.hpp>
#include <iostream>
#include "settings.h"
using namespace sf;


int main()
{

	

	RenderWindow window(VideoMode(window_width, window_height), "SFML Works!");

	window.setFramerateLimit(fps);


	while (window.isOpen())
	{

		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == Event::Closed) {

				window.close();
			}
		}

		



	

		window.clear();
		
		window.display();
	}
	return 0;
}