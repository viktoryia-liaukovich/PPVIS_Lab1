#include <iostream>
#include "../libraries/lib.h"
#include <stdlib.h>
#include <cmath>

using namespace std;

Rectangle::Rectangle() {
}

Rectangle::Rectangle(int x, int y, int w, int h) {
	x1 = x;
	y1 = y;
	width = w;
	height = h;
	calcCoordinates();
}

void Rectangle::setCoordinates() {
	cin >> x1 >> y1;
};

void Rectangle::setDimensions() {
	cin >> width >> height;
	calcCoordinates();
};

void Rectangle::getData() {
	cout << "(" << x1 << "," << y1 << ")" << "-----" << width << "-----";
	cout << "(" << x2 << "," << y2 << ")" << "\n|\n" << height << "\n|\n";
	cout << "(" << x3 << "," << y3 << ")" << "------------";
	cout << "(" << x4 << "," << y4 << ")" << "\n\n";
	cout << "Square = " << width * height << "\n\n";
};

void Rectangle::calcCoordinates() {
	x2 = x1 + width;
	x3 = x1;
	x4 = x2;
	y2 = y1;
	y3 = y1 + height;
	y4 = y3;
	checkIfRectangleExists();
}

void Rectangle::changeSize() {
	int multiplier;
	cin >> multiplier;
	while (multiplier < 1) {
		cout << "Enter valid positive multiplier value: ";
		cin >> multiplier;
	}
	if (width > height) {
		height *= multiplier;
	}
	else {
		width *= multiplier;
	}

	calcCoordinates();
};

void Rectangle::displacement() {
	calcCoordinates();
}

bool Rectangle::checkIfRectangleExists() {
	if (width == 0 || height == 0) {
		cout << "You've got NULL rectangle!\n\n";
		return false;
	}
	if (width < 0 || x1 < 0 || y1 < 0 || height < 0) {
		cout << "Enter valid rectangle data!\n\n";
		return false;
	}
	return true;
}

void Rectangle::enterTwoRectangles() {
	cout << "Enter dimensions of first rectangle (int width, int height): ";
	cin >> width1 >> height1;
	while (width1 < 1 || height1 < 1) {
		cout << "Enter valid positive dimensions value: ";
		cin >> width1 >> height1;
	}
	cout << "Enter dimensions of second rectangle (int width, int height): ";
	cin >> width2 >> height2;
	while (width1 < 1 || height2 < 1) {
		cout << "Enter valid positive dimensions value: ";
		cin >> width2 >> height2;
	}
}

Rectangle operator+(Rectangle a, Rectangle b) {
	int resX1 = (a.x1 < b.x1) ? a.x1 : b.x1;
	int resY1 = (a.y1 < b.y1) ? a.y1 : b.y1;
	int resX4 = (a.x4 > b.x4) ? a.x4 : b.x4;
	int resY4 = (a.y4 > b.y4) ? a.y4 : b.y4;
	int resWidth = resX4 - resX1;
	int resHeight = resY4 - resY1;

	return Rectangle(resX1, resY1, resWidth, resHeight);
}

Rectangle operator-(Rectangle a, Rectangle b) {
	bool bNotInA = (b.x1 >= a.x4 || b.y1 >= a.y4 || b.x4 <= a.x1 || b.y4 <= a.y1);
	bool aNotInB = (a.x1 >= b.x4 || a.y1 >= b.y4 || a.x4 <= b.x1 || a.y4 <= b.y1);

	if (bNotInA && aNotInB) return Rectangle(0, 0, 0, 0);

	Rectangle temp;
	if (b.x1 < a.x1) {
		temp = a;
		a = b;
		b = temp;
	}

	int resX1 = b.x1;
	int resY1 = (a.y1 < b.y1) ? b.y1 : a.y1;
	int resX4 = (a.x4 < b.x4) ? a.x4 : b.x4;
	int resY4 = (a.y4 < b.y4) ? a.y4 : b.y4;
	int resWidth = resX4 - resX1;
	int resHeight = resY4 - resY1;

	return Rectangle(resX1, resY1, resWidth, resHeight);
}

const Rectangle& Rectangle::operator+=(Rectangle a) {
	*this = *this + a;
	return *this;
}

const Rectangle& Rectangle::operator-=(Rectangle a) {
	*this = *this - a;
	return *this;
}

Rectangle& Rectangle::operator++() {
	width++;
	height++;
	calcCoordinates();
	return *this;
}

Rectangle Rectangle::operator++(int) {
	Rectangle oldRect = *this;
	width++;
	height++;
	calcCoordinates();
	return oldRect;
}

Rectangle& Rectangle::operator--() {
	width--;
	height--;
	calcCoordinates();
	return *this;
}

Rectangle Rectangle::operator--(int) {
	Rectangle oldRect = *this;
	width--;
	height--;
	calcCoordinates();
	return oldRect;
}