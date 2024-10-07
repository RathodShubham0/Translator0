#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const Point& v1, const Point& v2, const Point& v3)
    : vertex1(v1), vertex2(v2), vertex3(v3) {}

Triangle::~Triangle() {}

void Triangle::print() const {
    std::cout << "Triangle: " << std::endl;
    std::cout << "  Vertex 1: "; vertex1.print(); std::cout << std::endl;
    std::cout << "  Vertex 2: "; vertex2.print(); std::cout << std::endl;
    std::cout << "  Vertex 3: "; vertex3.print(); std::cout << std::endl;
}
