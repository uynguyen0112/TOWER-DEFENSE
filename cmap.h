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
	//-1 l� t??ng, 0 l� tr?ng, 1 l� Tower 
	void resetMapData();
	void makeMapData();
	void drawMap();

	cenemy& getEnemy() { return _ce; }
	ctower& getTower() { return _ctw; }
};