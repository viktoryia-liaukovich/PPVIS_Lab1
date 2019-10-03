#include <iostream>
#include "../libraries/lib.h"
#include "conio.h"

using namespace std;


int main() {
	Rectangle rect1;
	int n;

	while (true) {
		cout << "Choose:\n1) Create a rectangle;\n2) Show rectangle data;\n3) Change rectangle's square size by multiplying\n\n0) Exit\n";
		cin >> n;
		system("cls");
		switch (n) {
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
		}
		};
	}
	_getch();
	return 0;
}