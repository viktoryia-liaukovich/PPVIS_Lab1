#include <iostream>
#include "../libraries/lib.h"
#include "conio.h"

using namespace std;


int main() {
	Rectangle rect1;
	int menu;

	while (true) {
		cout << "Choose:\n1) Create a rectangle;\n2) Show rectangle data;\n3) Change rectangle's square size by multiplying\n";
		cout << "4) Increase X on 1\n5) Decrease X on 1\n6) Increase Y on 1\n\n7) Decrease Y on 1";
		cout << "8) ";
		cout << "\n0) Exit\n"; cin >> menu;
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
			cout << "Enter valid multiplier (int):";
			rect1.changeSize();
			break;
		}
		case 4: {
			cout << "Input new coordinates\n";
			rect1.setCoordinates();
			rect1.displacement();
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
			rect1.increaseX();
			break;
		}
		case 9: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1.decreaseX();
			break;
		}
		};
		}
		_getch();
		return 0;
	}
}