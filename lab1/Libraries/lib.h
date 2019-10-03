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
	int width1, height1, width2, height2;
	int resultWidth, resultHeight;

	Rectangle();
	void setCoordinates();
	void setDimensions();
	void getData();
	void changeSize();
	void increaseX();
	void decreaseX();
	void increaseY();
	void decreaseY();
	void sumRectangles();
	void sumRectangleWithParent();
	void crossRectangles();
	void crossRectanglesWithAssignment();
	void displacement();
	bool checkIfRectangleExists();
private:
	void enterTwoRectangles();
	void calcCoordinates();
};