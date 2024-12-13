// test-client.cpp; this file contains the main() function.
//

// Benjamin Hertzler
// CSC 222
// Basic Shapes Programming Project
//

#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	Rectangle rectangle_1(5, 10, "Rectangle 1"), rectangle_2(2, 6, "Rectangle 2");
	Circle circle_1(0, 0, 4, "Circle 1"), circle_2(10, 5, 20, "Circle 2");
	Square square_1(2, "Square 1");
	
	BasicShape* shapes[5] = { &rectangle_1, &rectangle_2, &circle_1, &circle_2, &square_1 };
	for (int i = 0; i < 5; i++)
	{
		cout << shapes[i]->getName() << " Area : " << shapes[i]->getArea() << endl;
	}

	return 0;
}