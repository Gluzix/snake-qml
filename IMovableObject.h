#pragma once

class IMovableObject
{
public:
    IMovableObject() {}
    IMovableObject(const IMovableObject &object) = delete;

    virtual void update() = 0;
};
