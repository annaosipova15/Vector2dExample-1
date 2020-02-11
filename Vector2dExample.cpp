#include "Vector2d.h"
#include <iostream>

using namespace std;

int main() {
	Vector2d a(3, 7, 2, 1);
	Vector2d b(4, 3);
	Vector2d c = Vector2d();
	cout << "a: " << (string)a << endl;
	cout << "b: " << (string)b << endl;
	cout << "c: " << (string)c << endl;
	cout << "a + b = " << string(a + b) << endl;
	cout << "a - b = " << string(a - b) << endl;
	cout << "a * 2 = " << string(a * 2) << endl;
	cout << "a * b = " << a * b << endl;
	cout << "length a = " << a.lenght() << endl;
	cout << "length b = " << b.lenght() << endl;
	cout << "angle (a,b) in radians = " << a.angle(b) << endl;
	cout << "angle (a,b) in degrees = " << a.angle(b) * 180 / 3.14 << endl;
	cout << "cos = " << a.angleCos(b) << endl;
	cout << "tan = " << a.angleTan(b) << endl;
	cout << "c++: " << (string)c++ << endl;
	cout << "++c: " << (string)++c << endl;
	cout << "c *= 2" << endl;
	c *= 2;
	cout << "c: " << (string)c << endl;
	cout << "c += a" << endl;
	c += a;
	cout << "c: " << (string)c << endl;
	cout << "c.x = 10" << endl;
	c.setx(10);
	cout << "c: " << (string)c << endl;
	return 0;
}