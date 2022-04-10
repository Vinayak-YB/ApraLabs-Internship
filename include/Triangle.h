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
	string getType();
	double getBase();
	double getHeight();
	double getHypotenuse();
	double getPerimeter();
	double getArea();
	string getColor();
};