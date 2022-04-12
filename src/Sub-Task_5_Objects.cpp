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
			for (int i = 0; i < 5; i++)
			{
				cout << "\nEnter Radius :";
				cin >> (C1[i]).radius;
				cout << "\nEnter Color :";
				cin >> (C1[i]).color;
				cout << "\nThe area is :" << (C1[i]).getArea() << "\n";
				cout << "\nThe perimeter is :" << (C1[i]).getPerimeter() << "\n";
				cout << "\nThe color is :" << (C1[i]).getColor() << "\n";
			}

		}
		else if (Shp.type == "Rectangle") {
			Rectangle R1[5];
			for (int i = 0; i < 5; i++)
			{
				cout << "\nEnter Breadth :";
				cin >> (R1[i]).b;
				cout << "\nEnter Height :";
				cin >> (R1[i]).h;
				cout << "\nEnter Color :";
				cin >> (R1[i]).color;
				cout << "\nThe area is :" << (R1[i]).getArea() << "\n";
				cout << "\nThe perimeter is :" << (R1[i]).getPerimeter() << "\n";
				cout << "\nThe color is :" << (R1[i]).getColor() << "\n";
			}
		}
		else if (Shp.type == "Triangle") {
			Triangle T1[5];
			for (int i = 0; i < 5; i++)
			{
				cout << "\nEnter Base :";
				cin >> (T1[i]).b;
				cout << "\nEnter Height :";
				cin >> (T1[i]).h;
				cout << "\nEnter Hypotenuse :";
				cin >> (T1[i]).hy;
				cout << "\nEnter Color :";
				cin >> (T1[i]).color;
				cout << "\nThe area is :" << (T1[i]).getArea() << "\n";
				cout << "\nThe perimeter is :" << (T1[i]).getPerimeter() << "\n";
				cout << "\nThe color is :" << (T1[i]).getColor() << "\n";
			}
		}
	}

}