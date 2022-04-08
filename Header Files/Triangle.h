#pragma once

#include<iostream>
#include<string.h>
#include"Shape.h"
using namespace std;

class Triangle : Shape {
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