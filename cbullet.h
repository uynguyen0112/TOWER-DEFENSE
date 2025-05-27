#pragma once
#include "cpoint.h"
using namespace std;

class cbullet {
private:
	int _n, _speed;
	cpoint _p[cpoint::MAP_SIZE * cpoint::MAP_SIZE];
	cpoint _m[cpoint::MAP_SIZE][cpoint::MAP_SIZE];
	cpoint _curr;
public:
	cbullet();
	void updateMap(int, int, cpoint);
    cpoint getCurr() { return _curr; }

    void setCurr(cpoint tcurr) {
        cpoint rc = cpoint::fromXYToRowCol(tcurr); 
        if (rc.getX() >= 0 && rc.getX() < cpoint::MAP_SIZE && rc.getY() >= 0 && rc.getY() < cpoint::MAP_SIZE && tcurr.getC() != -1) {
            _curr = tcurr;
        }
    }
    cpoint* getP() { return _p; }
    int getSpeed() { return _speed; }
    int getN() { return _n; }

    void setN(int tn) {
        if (tn >= 0 && tn <= cpoint::MAP_SIZE * cpoint::MAP_SIZE) {
            _n = tn;
        }
    }

    void setSpeed(int tspeed) {
        if (tspeed > 0 && tspeed <= 20) _speed = tspeed;
    }

    int queryCFromRowCol(int, int);
    int calcPathBullet(cpoint);
};