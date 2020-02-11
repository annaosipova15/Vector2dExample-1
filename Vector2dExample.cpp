#include "Vector2d.h"
#include <stdio.h>

using namespace std;

int main() {
	Vector2d a = Vector2d(0, 0, 3, 3);
	Vector2d b = Vector2d(a);
	Vector2d c = Vector2d(1, 1, 3, 4);
	a.print();
	a.setx(10);
	a.print();
	b.print();
	c.print();
	a.sum(b);
	a.print();
	printf_s("b * c = %lf\n", b.scalarMult(c));
	a.mult(3);
	a.print();
	a.sub(c);
	a.print();
	printf_s("cos angle (b,c) = %lf\n", b.angleCos(c));
	printf_s("tan angle (b,c) = %lf\n", b.angleTan(c));
	return 0;
}