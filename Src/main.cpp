#include <iostream>
#include "../libraries/lib.h"
#include "conio.h"

using namespace std;

int main() {
	cout << "Choose: ";
	int n;
	cin >> n;
	switch (n) {
	case 1: drawRectangle();
		break;
	case 2: //test();
		break;
	};
	_getch();
	return 0;
}