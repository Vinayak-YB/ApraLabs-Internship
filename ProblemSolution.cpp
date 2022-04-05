#include<iostream>
#include<string.h>
using namespace std;

class Shape {
public:
	string type;
};

class Circle : Shape{
public:
	double radius;
	string color;
public:
	string getType() {
		return type;
	}
	double getRadius() {
		return radius;
	}
	double getPerimeter() {
		return radius * 3.14 * 2;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
	string getColor() {
		return color;
	};
};

class Rectangle : Shape{
public:
	double b;
	double h;
	string color;
public:
	string getType() {
		return type;
	}
	double getBreadth() {
		return b;
	}
	double getHeight() {
		return h;
	}
	double getPerimeter() {
		return 2 * (b+h);
	}
	double getArea() {
		return b * h;
	}
	string getColor() {
		return color;
	}
};

class Triangle : Shape{
public:
	double b;
	double h;
	double hy;
	string color;
public:
	string getType() {
		return type;
	}
	double getBase() {
		return b;
	}
	double getHeight() {
		return h;
	}
	double getHypotenuse() {
		return hy;
	}
	double getPerimeter() {
		return b + h + hy;
	}
	double getArea() {
		return 0.5 * b * h;
	}
	string getColor() {
		return color;
	}
};

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
			cout << "\nEnter Radius :";
			cin >> c1.radius;
			cout << "\nEnter Color :";
			cin >> c1.color;
			cout << "\nThe area is :" << c1.getArea() << "\n";
			cout << "\nThe perimeter is :" << c1.getPerimeter() << "\n";
			cout << "\nThe color is :" << c1.getColor() << "\n";
		}
		else if (Shp.type == "Rectangle") {
			Rectangle r1;
			cout << "\nEnter Breadth :";
			cin >> r1.b;
			cout << "\nEnter Height :";
			cin >> r1.h;
			cout << "\nEnter Color :";
			cin >> r1.color;
			cout << "\nThe area is :" << r1.getArea() << "\n";
			cout << "\nThe perimeter is :" << r1.getPerimeter() << "\n";
			cout << "\nThe color is :" << r1.getColor() << "\n";
		}
		else if (Shp.type == "Triangle") {
			Triangle t1;
			cout << "\nEnter Base :";
			cin >> t1.b;
			cout << "\nEnter Height :";
			cin >> t1.h;
			cout << "\nEnter Hypotenuse :";
			cin >> t1.hy;
			cout << "\nEnter Color :";
			cin >> t1.color;
			cout << "\nThe area is :" << t1.getArea() << "\n";
			cout << "\nThe perimeter is :" << t1.getPerimeter() << "\n";
			cout << "\nThe color is :" << t1.getColor() << "\n";
		}
	}
	
}