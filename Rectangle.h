// Rectangle.h, the specification file for the class Rectangle.
//

// Benjamin Hertzler
// CSC 222
// Basic Shapes Project
//

#pragma once

#include "BasicShape.h"
#include <string>

class Rectangle : public BasicShape
{
public:
	
	// Function to calculate the area, derived from BasicShape.
	// Precondition:	xCenter, yCenter, and radius must be initialized.
	// Postcondition:	sets the value of area.
	//
	void calcArea();

	// Function to return the length of the rectangle.
	double getLength() const;

	// Function to return the width of the rectangle.
	double getWidth() const;

	// Default Constructor
	// Postconditions:	length = l;
	//		width = y;
	//		name = n (default value: "Rectangle")
	//
	Rectangle(double l, double w, std::string n = "Rectangle");

private:
	double length;		// Variable to store the length of the rectangle.
	double width;		// Variable to store the width of the rectangle.
};

