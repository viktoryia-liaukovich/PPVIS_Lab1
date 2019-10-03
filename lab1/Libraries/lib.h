#pragma once
using namespace std;

// functions

void drawRectangle();

// classes

class Rectangle {
public: 
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
	int width = 0, height = 0;

	Rectangle();
	void setCoordinates();
	void setDimensions();
	void getData();
	void changeSize();
	void increaseY();
	void decreaseY();
	void sumRectangles();
	void sumRectangleWithParent();
	void crossRectangles();
	void crossRectanglesIntoParent();
	bool checkIfRectangleExists();
private:
	void calcCoordinates();
};