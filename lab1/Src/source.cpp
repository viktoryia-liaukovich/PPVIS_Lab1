#include <iostream>
#include "../libraries/lib.h"
#include <stdlib.h>

using namespace std;

Rectangle::Rectangle() {
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
}

void Rectangle::changeSize() {
	int multiplier;
	cout << "";
	cin >> multiplier;
	if (width > height) {
		height *= multiplier;
	}
	else {
		width *= multiplier;
	}

	calcCoordinates();
};

void Rectangle::increaseX() {
	width++;
	calcCoordinates();
}

void Rectangle::decreaseX() {
	width--;
	calcCoordinates();
}

void Rectangle::increaseY() {
	height++;
	calcCoordinates();
}

void Rectangle::decreaseY() {
	height--;
	calcCoordinates();
}

void Rectangle::displacement() {
	calcCoordinates();
}

bool Rectangle::checkIfRectangleExists() {
	if (width == 0) {
		cout << "Create an instance of a rectangle first!\n\n";
		return false;
	}
	return true;
}