#pragma once
 
#include "Point.h"
#include "Triangle.h"
#include <vector>
using namespace std;

class Triangulation {
public:
    vector<Triangle> get_triangles(const vector<Point>& points);  // Function to generate triangles from points
};