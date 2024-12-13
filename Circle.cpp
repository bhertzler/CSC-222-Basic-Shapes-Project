// Circle.cpp, the implementation file for the class Circle
//

// Benjamin Hertzler
// CSC 222
// Basic Shapes Project
//

// Macro Constants

#define PI 3.1416

#include "Circle.h"
#include <string>
using namespace std;

void Circle::calcArea()
{
	double a = PI * (radius * radius);
	setArea(a);
}

void Circle::getCenter(double& x, double& y) const
{
	x = xCenter;
	y = yCenter;
}

double Circle::getRadius() const
{
	return radius;
}

Circle::Circle(double cx, double cy, double r, string n = "Circle")
{
	xCenter = cx;
	yCenter = cy;
	radius = r;
	setName(n);
	calcArea();
}

