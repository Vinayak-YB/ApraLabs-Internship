#include<iostream>
#include<string.h>
#include"Shape.h"
using namespace std;

Circle c1;
cout << "\nEnter Radius :";
cin >> c1.radius;
cout << "\nEnter Color :";
cin >> c1.color;
cout << "\nThe area is :" << c1.getArea() << "\n";
cout << "\nThe perimeter is :" << c1.getPerimeter() << "\n";
cout << "\nThe color is :" << c1.getColor() << "\n";