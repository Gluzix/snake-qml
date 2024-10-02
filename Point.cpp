#include "Point.h"

Point::Point(int x, int y)
    : x(x)
    , y(y)
{}

Point::Point(const Point &pt)
{
    x = pt.x;
    y = pt.y;
}

void Point::operator=(const Point &pt) {
    x = pt.x;
    y = pt.y;
}

bool Point::operator==(const Point &pt) const {
    return x == pt.x && y == pt.y;
}
