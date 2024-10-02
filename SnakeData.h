#pragma once

#include "CollisionObject.h"
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

class SnakeData : CollisionObject
{
public:
    SnakeData();

    void setDirection(Direction direction);
    const Direction direction() const;
    const Size &size() const;
    unsigned int length() const;
    const std::vector<Body> &body() const;

private:
    Direction mDirection {Direction::Right};
    Size mSize {10, 10};
    std::vector<Body> mBody {0};
};
