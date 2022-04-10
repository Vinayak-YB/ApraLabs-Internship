
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
			Circle *c1 = new Circle();
			cout << "\nEnter Radius :";
			cin >>(*c1).radius;
			cout << "\nEnter Color :";
			cin >> (*c1).color;
			cout << "\nThe area is :" << (*c1).getArea() << "\n";
			cout << "\nThe perimeter is :" << (*c1).getPerimeter() << "\n";
			cout << "\nThe color is :" << (*c1).getColor() << "\n";
			delete(c1);
		}
		else if (Shp.type == "Rectangle") {
			Rectangle *r1 = new Rectangle();
			cout << "\nEnter Breadth :";
			cin >>(*r1).b;
			cout << "\nEnter Height :";
			cin >>(*r1).h;
			cout << "\nEnter Color :";
			cin >> (*r1).color;
			cout << "\nThe area is :" << (*r1).getArea() << "\n";
			cout << "\nThe perimeter is :" << (*r1).getPerimeter() << "\n";
			cout << "\nThe color is :" << (*r1).getColor() << "\n";
			delete(r1);
		}
		else if (Shp.type == "Triangle") {
			Triangle *t1 = new Triangle();
			cout << "\nEnter Base :";
			cin >> (*t1).b;
			cout << "\nEnter Height :";
			cin >> (*t1).h;
			cout << "\nEnter Hypotenuse :";
			cin >> (*t1).hy;
			cout << "\nEnter Color :";
			cin >> (*t1).color;
			cout << "\nThe area is :" << (*t1).getArea() << "\n";
			cout << "\nThe perimeter is :" << (*t1).getPerimeter() << "\n";
			cout << "\nThe color is :" << (*t1).getColor() << "\n";
			delete(t1);
		}
	}

}