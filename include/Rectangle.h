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
	string getType();
	double getBreadth();
	double getHeight();
	double getPerimeter();
	double getArea();
	string getColor();
};