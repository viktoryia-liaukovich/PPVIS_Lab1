#include <iostream>
#include "../libraries/lib.h"
#include "conio.h"

using namespace std;


int main() {
	Rectangle rect1;
	int menu;

	while (true) {
		cout << "\n=======================================================\n";
		cout << "Choose:\n1)  Create a rectangle;\n2)  Show rectangle data;\n3)  Change rectangle's square size by multiplying\n";
		cout << "4)  Increase X on 1\n5)  Decrease X on 1\n6)  Increase Y on 1\n7)  Decrease Y on 1\n";
		cout << "8)  Move rectangle (new int x1, int y1)\n9)  Cross rectangles\n10) Cross rectangles with assignment\n";
		cout << "11) Sum rectangles\n12) Sum rectangles with assignment\n";
		cout << "\n\n0)  Exit\n"; cin >> menu;
		system("cls");
		switch (menu) {
		default: return 0;
		case 1: {
			cout << "Set coordinates of Top-Left corner (int x1, int y1):\n";
			rect1.setCoordinates();
			cout << "Set dimensions (int width, int height):\n";
			rect1.setDimensions();
			break;
		}
		case 2: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.getData();
			break;
		}
		case 3: {
			if (!rect1.checkIfRectangleExists()) break;
			cout << "Enter valid multiplier (int): ";
			rect1.changeSize();
			break;
		}
		case 4: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.increaseX();
			break;
		}
		case 5: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.decreaseX();
			break;
		}
		case 6: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.increaseY();
			break;
		}
		case 7: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.decreaseY();
			break;
		}
		case 8: {
			if (!rect1.checkIfRectangleExists()) break;
			cout << "Input new coordinates\n";
			rect1.setCoordinates();
			rect1.displacement();
			break;
		}
		case 9: {
			rect1.crossRectangles();
			break;
		}
		case 10: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.crossRectanglesWithAssignment();
			break;
		}
		case 11: {
			rect1.sumRectangles();
			break;
		}
		case 12: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.sumRectanglesWithAssignment();
			break;
		}
		};
	}

	_getch();
	return 0;
}