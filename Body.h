#pragma once

#include "Point.h"

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

    const Point &position() const {
        return mPosition;
    }

    const Point &oneBeforePosition() const {
        return mOneBeforePosition;
    }

    const Point &oneAfterPosition() const {
        return mOneAfterPosition;
    }

private:
    Point mPosition;
    Point mOneBeforePosition;
    Point mOneAfterPosition;
};
