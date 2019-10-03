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

void Rectangle::crossRectangles() {
	int resultWidth, resultHeight;
	enterTwoRectangles();
	if (width1 < width2) {
		resultWidth = width1;
	} else resultWidth = width2;
	if (height1 < height2) {
		resultWidth = height1;
	} else resultHeight = height2;
	cout << "Result rectangle: " << resultWidth << " x " << resultHeight << " (width x height)\n\n";
}

void Rectangle::crossRectanglesWithAssignment() {
	int resultWidth, resultHeight;
	cout<< "Enter dimensions of new rectangle (int width, int height): ";
	cin>> width1 >> height1;
	while (width1 < 1 || height1 < 1) {
		cout<< "Enter valid positive dimensions value: ";
		cin>> width1>> height1;
	}
	if (width1 < width) {
		width = width1;
	}
	if (height1 < height) {
		height = height1;
	}
	calcCoordinates();
}

void Rectangle::sumRectangles() {
	enterTwoRectangles();
	if (width1 > width2) {
		resultWidth = width1;
	}
	else resultWidth = width2;
	if (height1 > height2) {
		resultHeight = height1;
	}
	else resultHeight = height2;
	cout << "Result rectangle: " << resultWidth << " x " << resultHeight << " (width x height)\n\n";
	calcCoordinates();
}

void Rectangle::sumRectanglesWithAssignment() {
	cout << "Enter dimensions of new rectangle (int width, int height): ";
	cin >> width1 >> height1;
	while (width1 < 1 || height1 < 1) {
		cout << "Enter valid positive dimensions value: ";
		cin >> width1 >> height1;
	}
	if (width1 > width) {
		width = width1;
	}
	if (height1 > height) {
		height = height1;
	}
	calcCoordinates();
}