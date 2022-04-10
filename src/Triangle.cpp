#include<iostream>
#include<string.h>
#include"Shape.h"
#include"Triangle.h"
using namespace std;

string Triangle::getType() {
	return type;
}
double Triangle::getBase() {
	return b;
}
double Triangle::getHeight() {
	return h;
}
double Triangle::getHypotenuse() {
	return hy;
}
double Triangle::getPerimeter() {
	return b + h + hy;
}
double Triangle::getArea() {
	return 0.5 * b * h;
}
string Triangle::getColor() {
	return color;
}