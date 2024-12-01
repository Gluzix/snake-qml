#pragma once

#include "Point.h"
#include "CollisionObject.h"
#include "IMovableObject.h"

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

class SnakeData : public CollisionObject, public IMovableObject
{
public:
    SnakeData();
    bool collidedWithOwnBody() const;
    void setDirection(Direction direction);
    const Direction direction() const;
    const Size &size() const;
    unsigned int length() const;
    const std::vector<Point> &body() const;
    void update() override;

private:
    void moveSnakeBody();

    Direction mDirection {Direction::Right};
    Size mSize;
    std::vector<Point> mBody {};
};
