// BasicShape.h, specification and inline implementation file for abstract class BasicShape.
//

// Benjamin Herzler
// CSC 222
// Basic Shapes Programming Project
//

#pragma once

#include <string>

// Abstract class to manage basic shapes.
// Public Member Functions:
//	void setArea(double)
//	void setName(string)
//	double getArea() const
//	string getName() const
// Pure Virtual Functions:
//	void calcArea()
//
class BasicShape
{
public:
	
	// Function to set the area of the shape.
	// Postcondition:	area = a
	void setArea(double a) { area = a; }

	// Function to set the name of the shape.
	// Postcondition:	name = n
	void setName(std::string n) { name = n; }

	// Function to return the area of the shape as double.
	double getArea() const { return area; }

	// Function to return the name of the shape as string.
	std::string getName() const { return name; }

	// Virtual Function to calculate the area of the shape.
	// Precondition:	Call setArea in function definition.
	virtual void calcArea() = 0;

private:
	double area;			// Variable to store the area of the shape
	std::string name;		// Variable to store the name of the shape
};

