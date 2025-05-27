#include "cpoint.h"

cpoint::cpoint() {
	x = y = c = 0;
}

cpoint::cpoint(int tx, int ty, int tc) {
	x = tx;
	y = ty;
	c = tc;
}

int cpoint::getX() const {
	return x;
}

int cpoint::getY() const {
	return y;
}

int cpoint::getC() const {
	return c;
}

void cpoint::setC(int tc) {
	c = tc;
}

cpoint cpoint::fromXYToRowCol(cpoint v) {
	return { (v.y - 1 - TOP) / 2, (v.x - 2 - LEFT) / 4, v.c };
}

cpoint cpoint::fromRowColToXY(cpoint s) {
	return { 4 * s.y + 2 + LEFT, 2 * s.x + 1 + TOP, s.c };
}