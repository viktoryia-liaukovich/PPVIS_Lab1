#include <iostream>
#include "Libraries/lib.h"

using namespace std;

void main() {
	cout << "Choose: ";
	int n;
	cin >> n;
	switch (n) {
	case 1: drawRectangle();
		break;
	case 2: test();
		break;
	}
}