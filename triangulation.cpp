#include "Triangulation.h"
#include <vector>

vector<Triangle> Triangulation::get_triangles(const vector<Point>& points) {
    vector<Triangle> triangles;
    if (points.size() % 3 == 0) {
        for (size_t i = 0; i < points.size(); i += 3) {
            Triangle t(points[i], points[i + 1], points[i + 2]);
            triangles.push_back(t);
        }
    }
    return triangles;
}