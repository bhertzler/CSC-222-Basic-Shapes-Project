// Rectangle.cpp, the implementation file for the class Rectangle.
//

// Benjamin Hertzler
// CSC 222
// Basic Shapes Project
//

#include "Rectangle.h"
#include <string>
using namespace std;

void Rectangle::calcArea()
{
	double a = length * width;
	setArea(a);
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

Rectangle::Rectangle(double l, double w, string n = "Rectangle")
{
	length = l;
	width = w;
	setName(n);
	calcArea();
}
