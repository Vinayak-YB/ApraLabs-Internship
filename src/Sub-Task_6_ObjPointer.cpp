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
			Circle C1[5];
			Circle* ptr[5];
			for (int i = 0; i < 5; i++)
			{
				ptr[i] = &C1[i];
				cout << "\nEnter Radius :";
				cin >> (ptr[i])->radius;
				cout << "\nEnter Color :";
				cin >> (ptr[i])->color;
				cout << "\nThe area is :" << (ptr[i])->getArea() << "\n";
				cout << "\nThe perimeter is :" << (ptr[i])->getPerimeter() << "\n";
				cout << "\nThe color is :" << (ptr[i])->getColor() << "\n";
			}

		}
		else if (Shp.type == "Rectangle") {
			Rectangle R1[5];
			Rectangle* point[5];
			for (int i = 0; i < 5; i++)
			{
				point[i] = &R1[i];
				cout << "\nEnter Breadth :";
				cin >> (point[i])->b;
				cout << "\nEnter Height :";
				cin >> (point[i])->h;
				cout << "\nEnter Color :";
				cin >> (point[i])->color;
				cout << "\nThe area is :" << (point[i])->getArea() << "\n";
				cout << "\nThe perimeter is :" << (point[i])->getPerimeter() << "\n";
				cout << "\nThe color is :" << (point[i])->getColor() << "\n";
			}
		}
		else if (Shp.type == "Triangle") {
			Triangle T1[5];
			Triangle* pointer[5];
			for (int i = 0; i < 5; i++)
			{
				pointer[i] = &T1[i];
				cout << "\nEnter Base :";
				cin >> (pointer[i])->b;
				cout << "\nEnter Height :";
				cin >> (pointer[i])->h;
				cout << "\nEnter Hypotenuse :";
				cin >> (pointer[i])->hy;
				cout << "\nEnter Color :";
				cin >> (pointer[i])->color;
				cout << "\nThe area is :" << (pointer[i])->getArea() << "\n";
				cout << "\nThe perimeter is :" << (pointer[i])->getPerimeter() << "\n";
				cout << "\nThe color is :" << (pointer[i])->getColor() << "\n";
			}
		}
	}

}