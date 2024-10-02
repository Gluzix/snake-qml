#pragma once

#include "Body.h"

#include <vector>

enum class Direction {
    Top,
    Bottom,
    Left,
    Right
};

struct Size {
    unsigned int width = 10;
    unsigned int heght = 10;
};

class SnakeData
{
public:
    SnakeData();

    const Point &position() {
        return mPosition;
    }
    const Direction direction() {
        return mDirection;
    }
    const Size &size() {
        return mSize;
    }
    unsigned int length() {
        return static_cast<unsigned int>(mBody.size());
    }

private:
    Point mPosition {50, 50};
    Direction mDirection {Direction::Right};
    Size mSize {10, 10};
    std::vector<Body> mBody {0};
};
