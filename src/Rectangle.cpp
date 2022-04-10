#include<iostream>
#include<string.h>
#include"Shape.h"
#include"Rectangle.h"
using namespace std;

string Rectangle::getType() {
	return type;
}
double Rectangle::getBreadth() {
	return b;
}
double Rectangle::getHeight() {
	return h;
}
double Rectangle::getPerimeter() {
	return 2 * (b + h);
}
double Rectangle::getArea() {
	return b * h;
}
string Rectangle::getColor() {
	return color;
}