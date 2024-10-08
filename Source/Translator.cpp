#include "Reader.h"
#include "Triangulation.h"
#include "Writer.h"
#include <iostream>
using namespace std;

int main() {
    Reader reader;
    vector<Point> points = reader.read();

    Triangulation triangulation;
    vector<Triangle> triangles = triangulation.get_triangles(points);

    Writer writer;
    writer.write(triangles, reader.get_unique_points());

    return 0;
}
