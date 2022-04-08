#pragma once
#include<iostream>
#include<string.h>
#include"Shape.h"
using namespace std;

class Circle : Shape {
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