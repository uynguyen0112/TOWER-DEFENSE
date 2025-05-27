#pragma once
#include "ctool.h"
#include "cenemy.h"
#include "ctower.h"
#include <vector>

class cmap {
	cenemy _ce;
	ctower _ctw;
	cpoint _m[cpoint::MAP_SIZE][cpoint::MAP_SIZE];
public:
	cmap();
	//-1 là t??ng, 0 là tr?ng, 1 là Tower 
	void resetMapData();
	void makeMapData();
	void drawMap();

	cenemy& getEnemy() { return _ce; }
	ctower& getTower() { return _ctw; }
};