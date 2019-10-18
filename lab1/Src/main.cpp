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
		cout << "4) X++ and Y++;\n5) X-- and Y--;\n6) ++X and ++Y;\n7) --X and --Y;\n";
		cout << "8)  Move rectangle (new int x1, int y1);\n9)  Cross rectangles (-);\n10) Cross rectangles with assignment (-=);\n";
		cout << "11) Sum rectangles (+);\n12) Sum rectangles with assignment (+=);\n";
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
			rect1++;
			rect1.getData();
			break;
		}
		case 5: {
			if (!rect1.checkIfRectangleExists()) break;
			rect1--;
			rect1.getData();
			break;
		}
		case 6: {
			if (!rect1.checkIfRectangleExists()) break;
			++rect1;
			rect1.getData();
			break;
		}
		case 7: {
			if (!rect1.checkIfRectangleExists()) break;
			--rect1;
			rect1.getData();
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
			Rectangle a;
			cout << "Set first rectangle's coordinates of Top-Left corner (int x1, int y1):\n";
			a.setCoordinates();
			cout << "Set first rectangle's dimensions (int width, int height):\n";
			a.setDimensions();
			Rectangle b;
			cout << "Set second rectangle's coordinates of Top-Left corner (int x1, int y1):\n";
			b.setCoordinates();
			cout << "Set second rectangle's dimensions (int width, int height):\n";
			b.setDimensions();
			Rectangle res = a - b;
			res.getData();
			break;
		}
		case 10: {
			if (!rect1.checkIfRectangleExists()) break;
			Rectangle a;
			cout << "Set rectangle's coordinates of Top-Left corner (int x1, int y1):\n";
			a.setCoordinates();
			cout << "Set rectangle's dimensions (int width, int height):\n";
			a.setDimensions();
			rect1 -= a;
			break;
		}
		case 11: {
			Rectangle a;
			cout << "Set first rectangle's coordinates of Top-Left corner (int x1, int y1):\n";
			a.setCoordinates();
			cout << "Set first rectangle's dimensions (int width, int height):\n";
			a.setDimensions();
			Rectangle b;
			cout << "Set second rectangle's coordinates of Top-Left corner (int x1, int y1):\n";
			b.setCoordinates();
			cout << "Set second rectangle's dimensions (int width, int height):\n";
			b.setDimensions();
			Rectangle res = a + b;
			res.getData();
			break;
		}
		case 12: {
			if (!rect1.checkIfRectangleExists()) break;
			Rectangle a;
			cout << "Set rectangle's coordinates of Top-Left corner (int x1, int y1):\n";
			a.setCoordinates();
			cout << "Set rectangle's dimensions (int width, int height):\n";
			a.setDimensions();
			rect1 += a;
			break;
		}
		};
	}

	_getch();
	return 0;
}