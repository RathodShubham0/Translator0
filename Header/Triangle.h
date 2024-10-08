#pragma once
// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point vertex1, vertex2, vertex3;

public:
    Triangle(const Point& v1, const Point& v2, const Point& v3);
    ~Triangle();

    void print() const;
};

#endif // TRIANGLE_H
