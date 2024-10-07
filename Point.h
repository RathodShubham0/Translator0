#pragma once
#include <iostream>
using namespace std;

class Point {
public:
    double x, y, z;

    Point(double x = 0, double y = 0, double z = 0);
    ~Point();

    void get_coord() const;
};