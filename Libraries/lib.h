#pragma once
using namespace std;

// functions

void drawRectangle();
void renderRectangle();

// classes

class RectangleElement {
public: 
	int x1, x2, x3, x4, y1, y2, y3, y4;
	RectangleElement() {
		getCoordinates();
		calcCoordinates();
	};
private: 
	void getCoordinates() {
		cin >> x1, y1, x4, y4;
	};
	void calcCoordinates() {
		x2 = x4;
		y2 = y1;
		x3 = x1;
		y3 = y4;
	};
};