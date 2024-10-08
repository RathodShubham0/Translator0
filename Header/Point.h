#pragma once
// Point.h
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    double x, y, z;

public:
    Point(double xVal, double yVal, double zVal);
    ~Point();  // Destructor

    double getX() const;
    double getY() const;
    double getZ() const;

    bool operator==(const Point& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

#endif // POINT_H            


