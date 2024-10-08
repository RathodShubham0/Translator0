#pragma once
// Reader.h
#ifndef READER_H
#define READER_H

#include <string>
#include <vector>
#include <unordered_map>
#include "Point.h"
#include "Triangle.h"

class Reader {
private:
    std::vector<Point> uniquePoints;
    std::unordered_map<std::string, int> pointIndexMap;

    std::string pointToString(const Point& pt) const;

public:
    Reader();
    ~Reader();

    void readSTL(const std::string& filename);
    std::vector<Triangle> getTriangles() const;
};

#endif // READER_H
