#pragma once

struct Point {
    Point();
    Point(int x, int y);
    Point (const Point &pt);
    void operator=(const Point &pt);
    bool operator==(const Point &pt) const;

    int x{-1};
    int y{-1};
};
