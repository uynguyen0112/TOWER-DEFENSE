#pragma once
#include "cbullet.h"
using namespace std;

class ctower {
    cpoint _location;
    cbullet _cb;
public:
    ctower() { _location = {0, 0, 0}; }
    cpoint getLocation() { return _location; }
    
    void setLocation(cpoint tl) {
        cpoint rc = cpoint::fromXYToRowCol(tl);
        if (rc.getX() >= 0 && rc.getX() < cpoint::MAP_SIZE && rc.getY() >= 0 && rc.getY() < cpoint::MAP_SIZE && tl.getC() != -1) {
            _location = tl;
        }
    }

    void setMapForBullet(cpoint[][cpoint::MAP_SIZE]);
    void calcPathBullet() {
        _cb.calcPathBullet(_location);
    }

    cbullet& getBullet() { return _cb; }
};