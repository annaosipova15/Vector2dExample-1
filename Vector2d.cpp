#include "Vector2d.h"
#include <stdio.h>
#include <math.h>

Vector2d::Vector2d() {
	this->x = 0;
	this->y = 0;
}

Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2) {
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& other) {
	this->x = other.x;
	this->y = other.y;
}

Vector2d::~Vector2d() {};

void Vector2d::setx(double newX) {
	this->x = newX;
}

double Vector2d::getx() {
	return this->x;
}

void Vector2d::sety(double newY) {
	this->y = newY;
}

double Vector2d::gety() {
	return this->y;
}

void Vector2d::print() {
	printf_s("V(%lf, %lf)\n", this->x, this->y);
}

Vector2d Vector2d::sum(Vector2d other) {
	return Vector2d(this->x + other.x, this->y + other.y);
;}

Vector2d Vector2d::sub(Vector2d other) {
	return Vector2d(this->x - other.x, this->y - other.y);
}

Vector2d Vector2d::mult(double scalar) {
	return Vector2d(this->x * scalar, this->y * scalar);
}

double Vector2d::scalarMult(Vector2d other) {
	return this->x * other.x + this->y * other.y;
}

double Vector2d::lenght() {
	return sqrt(this->x * this->x + this->y * this->y);
}

double Vector2d::angleCos(Vector2d other) {
	return this->scalarMult(other) / (this->lenght() * other.lenght());
}

double Vector2d::angleTan(Vector2d other) {
	return tan(acos(this->angleCos(other)));
}

