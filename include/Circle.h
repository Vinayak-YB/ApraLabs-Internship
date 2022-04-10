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
	string getType();
	double getRadius();
	double getPerimeter();
	double getArea();
	string getColor();
};