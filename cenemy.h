#pragma once
#include "cpoint.h"
using namespace std;

class cenemy {
private:
    int _speed;
    cpoint _start, _end, _curr;
    // Array contains the path for the cenemy object from _start to _end 
    cpoint _p[cpoint::MAP_SIZE * cpoint::MAP_SIZE];
    // Data for pathfinding for cenemy objects 
    int dd[4], dc[4];
public:
    cenemy();
    cenemy(cpoint tstart, cpoint tend, cpoint tcurr);
    cpoint* getP() { return _p; }
    cpoint getStart() { return _start; }
    cpoint getEnd() { return _end; }
    int getSpeed() { return _speed; }
    cpoint getCurr() { return _curr; }
    void setSpeed(int tspeed) {
        if (tspeed > 0 && tspeed < 10) _speed = tspeed;
    }
    void setStart(cpoint tstart) {
        cpoint rc = cpoint::fromXYToRowCol(tstart);
        if (rc.getX() >= 0 && rc.getX() < cpoint::MAP_SIZE && rc.getY() >= 0 && rc.getY() < cpoint::MAP_SIZE && tstart.getC() != -1) {
            _start = tstart;
        }
    }

    void setEnd(cpoint tend) {
        cpoint rc = cpoint::fromXYToRowCol(tend);
        if (rc.getX() >= 0 && rc.getX() < cpoint::MAP_SIZE && rc.getY() >= 0 && rc.getY() < cpoint::MAP_SIZE && tend.getC() != -1) {
            _end = tend;
        }
    }

    void setCurr(cpoint tcurr) {
        cpoint rc = cpoint::fromXYToRowCol(tcurr);
        if (rc.getX() >= 0 && rc.getX() < cpoint::MAP_SIZE && rc.getY() >= 0 && rc.getY() < cpoint::MAP_SIZE && tcurr.getC() != -1) {
            _curr = tcurr;
        }
    }

    void findPath(cpoint[][cpoint::MAP_SIZE], cpoint, cpoint);
private:
    void calcPath(int[][cpoint::MAP_SIZE], int, cpoint, cpoint, int = 1);
};