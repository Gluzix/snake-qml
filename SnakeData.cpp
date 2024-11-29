#include "SnakeData.h"

SnakeData::SnakeData() {}

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
