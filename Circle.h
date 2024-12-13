// Circle.h, the specification file for the class Circle
//

// Benjamin Hertzler
// CSC 222
// Basic Shapes Project
//

#pragma once

#include "BasicShape.h"
#include <string>

class Circle : public BasicShape
{
public:
	
	// Function to calculate the area, derived from BasicShape.
	// Precondition:	xCenter, yCenter, and radius must be initialized.
	// Postcondition:	sets the value of area.
	//
	void calcArea();
	
	// Function to return the coordinates of the circle's center point.
	// Postconditons:	x = xCenter; y = yCenter
	void getCenter(double& x, double& y) const;

	// Function to return the radius of the circle.
	double getRadius() const;

	// Default Constructor
	// Postconditions:	xCenter = cx;
	//		yCenter = cy;
	//		radius = r;
	//		name = n (default value: "Circle")
	//
	Circle(double cx, double cy, double r, std::string n = "Circle");

private:
	double xCenter;		// Variable to store the centerpoint x coordinate.
	double yCenter;		// Variable to store the centerpoint y coordinate.
	double radius;		// Variable to store the radius.
};

