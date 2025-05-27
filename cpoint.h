#pragma once
#include <iostream>
using namespace std;

class cpoint {
private:
	int x, y, c;
public:
	const static int MAP_SIZE = 10;
	const static int TOP = 1;
	const static int LEFT = 3;
public:
	cpoint();
	cpoint(int tx, int ty, int tc);
	
	int getX() const;
	int getY() const;
	int getC() const;
	void setC(int tc);
	static cpoint fromXYToRowCol(cpoint v);
	static cpoint fromRowColToXY(cpoint s);

	cpoint& operator=(const cpoint& other) {
		x = other.x;
		y = other.y;
		c = other.c;
		return *this;
	}
};