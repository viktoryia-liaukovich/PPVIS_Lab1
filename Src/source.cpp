#include <iostream>
#include "../libraries/lib.h"
#include <stdlib.h>

using namespace std;

void drawRectangle() {
	cout << "Type in coordinates: x1, y1, x4, y4\n";
	RectangleElement rect1;
	cout << "(" << rect1.x1 << "," << rect1.y1 << ")" << endl;
	cout << "(" << rect1.x2 << "," << rect1.y2 << ")" << endl;
	cout << "(" << rect1.x3 << "," << rect1.y3 << ")" << endl;
	cout << "(" << rect1.x4 << "," << rect1.y4 << ")" << endl;
};

void testFunc() {
	cout << "Type in coordinates: x1, y1, x4, y4\n";
	RectangleElement rect1;
};

void changeSize() {
	int w;
	cout << "";
	cin >> w;
	switch (w) {
	case 1: //x4 = x4 * 0, 5;
		break;
	case 2: //x4 = x4 * 2;
		break;
	case 3: //x4 = x4 * 3;
		break;
	};
	drawRectangle();
};