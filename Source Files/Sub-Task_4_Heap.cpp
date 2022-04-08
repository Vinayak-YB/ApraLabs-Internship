//Use Heap Memory (using new operator) //

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
			double* r = new double();  // Allocating memory in Heap //
			cout << "\nEnter Radius :";
			cin >> *r;
			c1.radius = *r;
			cout << "\nEnter Color :";
			cin >> c1.color;
			cout << "\nThe area is :" << c1.getArea() << "\n";
			cout << "\nThe perimeter is :" << c1.getPerimeter() << "\n";
			cout << "\nThe color is :" << c1.getColor() << "\n";
			delete(r);  // Deallocating memory from Heap //
		}
		else if (Shp.type == "Rectangle") {
			Rectangle r1;
			double* breadth = new double();
			double* height = new double();
			cout << "\nEnter Breadth :";
			cin >> *breadth;
			r1.b = *breadth;
			cout << "\nEnter Height :";
			cin >> *height;
			r1.h = *height;
			cout << "\nEnter Color :";
			cin >> r1.color;
			cout << "\nThe area is :" << r1.getArea() << "\n";
			cout << "\nThe perimeter is :" << r1.getPerimeter() << "\n";
			cout << "\nThe color is :" << r1.getColor() << "\n";
			delete(breadth);
			delete(height);
		}
		else if (Shp.type == "Triangle") {
			Triangle t1;
			double* base = new double();
			double* hgt = new double();
			double* hypotenuse = new double();
			cout << "\nEnter Base :";
			cin >> *base;
			t1.b = *base;
			cout << "\nEnter Height :";
			cin >> *hgt;
			t1.h = *hgt;
			cout << "\nEnter Hypotenuse :";
			cin >> *hypotenuse;
			t1.hy = *hypotenuse;
			cout << "\nEnter Color :";
			cin >> t1.color;
			cout << "\nThe area is :" << t1.getArea() << "\n";
			cout << "\nThe perimeter is :" << t1.getPerimeter() << "\n";
			cout << "\nThe color is :" << t1.getColor() << "\n";
			delete(base);
			delete(hgt);
			delete(hypotenuse);
		}
	}

}