//Create Object Pointer and Use it instead //

#include<iostream>
#include<string.h>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;

int main()
{
	int num;
	cout << "Enter number of Shapes:";
	cin >> num;
	for (int i = 0; i < num; i++) {
		Shape Shp;
		cout << "Enter type of shape:  (name) \n 1.Circle \n 2.Rectangle \n 3.Triangle \n";
		cin >> Shp.type;
		if (Shp.type == "Circle") {
			Circle c1;
			Circle *circlePoint = &c1;
			cout << "\nEnter Radius :";
			cin >> circlePoint->radius; // Accessing members method 1 //
			cout << "\nEnter Color :";
			cin >> circlePoint->color;
			cout << "\nThe area is :" << (*circlePoint).getArea() << "\n"; // Accessing members method 2 //
			cout << "\nThe perimeter is :" << (*circlePoint).getPerimeter() << "\n";
			cout << "\nThe color is :" << (*circlePoint).getColor() << "\n";
		}
		else if (Shp.type == "Rectangle") {
			Rectangle r1;
			Rectangle *rectPoint = &r1;
			cout << "\nEnter Breadth :";
			cin >> rectPoint->b;
			cout << "\nEnter Height :";
			cin >> rectPoint->h;
			cout << "\nEnter Color :";
			cin >> rectPoint->color;
			cout << "\nThe area is :" << (*rectPoint).getArea() << "\n";
			cout << "\nThe perimeter is :" << (*rectPoint).getPerimeter() << "\n";
			cout << "\nThe color is :" << (*rectPoint).getColor() << "\n";
		}
		else if (Shp.type == "Triangle") {
			Triangle t1;
			Triangle *triPoint = &t1;
			cout << "\nEnter Base :";
			cin >> triPoint->b;
			cout << "\nEnter Height :";
			cin >> triPoint->h;
			cout << "\nEnter Hypotenuse :";
			cin >> triPoint->hy;
			cout << "\nEnter Color :";
			cin >> triPoint->color;
			cout << "\nThe area is :" << (*triPoint).getArea() << "\n";
			cout << "\nThe perimeter is :" << (*triPoint).getPerimeter() << "\n";
			cout << "\nThe color is :" << (*triPoint).getColor() << "\n";
		}
	}
	
}