#pragma once

struct Point {
    Point(int x, int y)
        : x(x)
        , y(y)
    {}
    Point (const Point &pt)
    {
        x = pt.x;
        y = pt.y;
    }
    void operator=(const Point &pt) {
        x = pt.x;
        y = pt.y;
    }
    bool operator==(const Point &pt) {
        return x == pt.x && y == pt.y;
    }

    int x{-1};
    int y{-1};
};

class Body {

public:
    Body(const Point &position,
         const Point &oneBeforePosition,
         const Point &oneAfterPosition)
        : mPosition(position)
        , mOneBeforePosition(oneBeforePosition)
        , mOneAfterPosition(oneAfterPosition)
    {

    }

    void setOneBeforePosition(const Point &oneBeforePosition) {
        mOneBeforePosition = oneBeforePosition;
    }

    void setOneAfterPosition(const Point &oneAfterPosition) {
        mOneAfterPosition = oneAfterPosition;
    }

    void setPosition(const Point &position)
    {
        mPosition = position;
    }

    const Point &position() {
        return mPosition;
    }

    const Point &oneBeforePosition() {
        return mOneBeforePosition;
    }

    const Point &oneAfterPosition() {
        return mOneAfterPosition;
    }

private:
    Point mPosition;
    Point mOneBeforePosition;
    Point mOneAfterPosition;
};
