#pragma once
#include <string>

class Vector2d
{
	private: 
		double x, y;


	public:
		Vector2d();
		Vector2d(double, double);
		Vector2d(double, double, double, double);
		Vector2d(const Vector2d&);

		~Vector2d();

		Vector2d operator+(const Vector2d& other) const; 
		Vector2d operator-(const Vector2d& other) const;
		Vector2d operator*(double scalar) const;
		friend Vector2d operator*(double scalar, const Vector2d& vector);
		double operator*(const Vector2d& other) const;

		Vector2d& operator++();
		Vector2d& operator--();
		Vector2d operator++(int);
		Vector2d operator--(int);

		const Vector2d& operator+=(const Vector2d&);
		const Vector2d& operator-=(const Vector2d&);
		const Vector2d& operator*=(double scalar);

		operator std::string() const;

		void setx(double);
		double getx();

		void sety(double);
		double gety();

		double lenght() const;
		double angleCos(const Vector2d&) const;
		double angleTan(const Vector2d&) const;
		double angle(const Vector2d&) const;
};

