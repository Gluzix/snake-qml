#pragma once

#include "Point.h"

class CollisionObject
{
public:
    CollisionObject();

    void setPosition(const Point &position) {
        mPosition = position;
    }

    const Point &position() const {
        return mPosition;
    }

protected:
    Point mPosition {50, 50};
};
