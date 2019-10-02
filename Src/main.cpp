#include <iostream>
#include "../libraries/lib.h"
#include "conio.h"

using namespace std;

int main() {
	cout << "Choose:\n1) Create rectangle;\n";
	int n;
	cin >> n;
	switch (n) {
	case 1: drawRectangle();
		break;
	case 2: //changeSize (x1; y1; x4; y4;)
		break;
	};
	_getch();
	return 0;
}