#pragma once
using namespace std;


class Rectangle {
public: 
	int x1 = 0, y1 = 0;
	int x2 = 0, y2 = 0;
	int x3 = 0, y3 = 0;
	int x4 = 0, y4 = 0;
	int width = 0, height = 0;
	int width1, height1, width2, height2;
	int resultWidth, resultHeight;

	Rectangle();
	Rectangle(int x, int y, int w, int h);
	void setCoordinates();
	void setDimensions();
	void getData();
	void changeSize();

	friend Rectangle operator+(Rectangle, Rectangle);
	friend Rectangle operator-(Rectangle, Rectangle);
	const Rectangle& operator+=(Rectangle);
	const Rectangle& operator-=(Rectangle);

	Rectangle& operator++(); // ++x
	Rectangle operator++(int); // x++
	Rectangle& operator--(); // --x
	Rectangle operator--(int); // x--
	void displacement();
	bool checkIfRectangleExists();
	void calcCoordinates();
private:
	void enterTwoRectangles();
};