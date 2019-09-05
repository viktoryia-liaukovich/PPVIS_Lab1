#include <iostream>
#include "../libraries/lib.h"
#include "SFML/Graphics.hpp"

using namespace std;

void drawRectangle() {
	cout << "Type coordinates: x1, y1, x4, y4\n";
	Rectangle rect1;
	cout << rect1.x1;
	renderRectangle();
};

void renderRectangle() {
	using namespace sf;
	RenderWindow window(VideoMode(600, 480), "Rectangle");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed ||
				(event.type == Event::KeyPressed && event.key.code == Keyboard::Escape))
				window.close();
		};
		RectangleShape background(Vector2f(600, 480));
		background.setFillColor(Color(254, 254, 254));
		window.draw(background);
		window.display();
	}
}