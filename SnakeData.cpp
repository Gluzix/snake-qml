#include "SnakeData.h"

SnakeData::SnakeData()
{

}

bool SnakeData::collidedWithOwnBody() const
{
    for (const auto &bodyPart: mBody) {
        if (mPosition == bodyPart) {
            return true;
        }
    }

    return false;
}

void SnakeData::setDirection(Direction direction) {
    mDirection = direction;
}

const Direction SnakeData::direction() const {
    return mDirection;
}

const Size &SnakeData::size() const {
    return mSize;
}

unsigned int SnakeData::length() const {
    return static_cast<unsigned int>(mBody.size());
}

const std::vector<Point> &SnakeData::body() const {
    return mBody;
}

void SnakeData::update()
{
    moveSnakeBody();
}

void SnakeData::moveSnakeBody()
{
    auto updateRestOfTheBody = [this](const Point &point, auto iterator) {
        Point previousPt = point;
        for (auto it = iterator; it != mBody.end(); ++it) {
            *iterator = previousPt;
            previousPt = *iterator;
        }
    };

    auto posIterator = mBody.begin();
    Point point = *posIterator;

    switch (mDirection) {
        case Direction::Top: posIterator->y--; break;
        case Direction::Bottom: posIterator->y++; break;
        case Direction::Left: posIterator->x--; break;
        case Direction::Right: posIterator->x++; break;
    }

    posIterator++;
    updateRestOfTheBody(point, posIterator);
}
