#include "Vector2d.h"
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



Vector2d Vector2d::operator+(const Vector2d& other) const {
	return Vector2d(this->x + other.x, this->y + other.y);
}

Vector2d Vector2d::operator-(const Vector2d& other) const{
	return Vector2d(this->x - other.x, this->y - other.y);
}

Vector2d Vector2d::operator*(double scalar) const {
	return Vector2d(this->x * scalar, this->y * scalar);
}

Vector2d operator*(double scalar, Vector2d& vector) {
	return vector * scalar;
}

double Vector2d::operator*(const Vector2d& other) const {
	return this->x * other.x + this->y * other.y;
}



Vector2d& Vector2d::operator++() {
	this->x++;
	this->y++;
	return *this;
}

Vector2d& Vector2d::operator--() {
	this->x--;
	this->y--;
	return *this;
}

Vector2d Vector2d::operator++(int) {
	Vector2d temp(this->x, this->y);
	this->x++;
	this->y++;
	return temp;
}

Vector2d Vector2d::operator--(int) {
	Vector2d temp(this->x, this->y);
	this->x++;
	this->y++;
	return temp;
}



const Vector2d& Vector2d::operator+=(const Vector2d& other) {
	this->x += other.x;
	this->y += other.y;
	return *this;
}

const Vector2d& Vector2d::operator-=(const Vector2d& other) {
	this->x -= other.x;
	this->y -= other.y;
	return *this;
}

const Vector2d& Vector2d::operator*=(double scalar) {
	this->x *= scalar;
	this->y *= scalar;
	return *this;
};



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



double Vector2d::lenght() const {
	return sqrt(this->x * this->x + this->y * this->y);
}

double Vector2d::angleCos(const Vector2d& other) const {
	return (*this) * other / (this->lenght() * other.lenght());
}

double Vector2d::angleTan(const Vector2d& other) const {
	return tan(this->angle(other));
}

double Vector2d::angle(const Vector2d& other) const {
	return acos(this->angleCos(other));
}



Vector2d::operator std::string() const {
	return "(" + std::to_string(this->x) + "; " + std::to_string(this->y) + ")";
}