#include <iostream>
#include "../libraries/lib.h"
#include "conio.h"

using namespace std;

int main() {
	cout << "Choose:1) Type coordinates; ";
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