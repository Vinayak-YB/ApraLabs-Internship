#pragma once
#include<iostream>
#include<string.h>
#include"Shape.h"
using namespace std;

class Rectangle : Shape {
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
		return 2 * (b + h);
	}
	double getArea() {
		return b * h;
	}
	string getColor() {
		return color;
	}
};