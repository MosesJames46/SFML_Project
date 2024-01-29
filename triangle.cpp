#include "triangle.h"


void Triangle::drawTriangle() {
	line1.drawShow(true);
	line2.drawShow(true);
	line3.drawShow(true);

	line1.setPerspective();
	line2.setPerspective();
	line3.setPerspective();

	line1.drawLines3D();
	line2.drawLines3D();
	line3.drawLines3D();
}

