#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

Point::~Point() {}

void Point::get_coord() const {
    cout << "(x = " << x << ", y = " << y << ", z = " << z << ")" << endl;
}
