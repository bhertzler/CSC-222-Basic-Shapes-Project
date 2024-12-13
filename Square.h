// Square.h, the specification and inline implementation for the class Square.
//

// Benjamin Hertzler
// CSC 222
// Basic Shapes Project
//

#pragma once

#include "Rectangle.h"
#include <string>

class Square : public Rectangle
{
public:

	// Function to return the length of the side of the square.
	double getSide() const { return side; }

	// Default Parameter
	// Postcondition: side = s;
	//	name = n (default value: "Square")
	//
	Square(double s, std::string n = "Square") : Rectangle(side, side) { setName(n); }

private:
	double side;		// Variable to store the length of the side of the square.
};


