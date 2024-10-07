#include "Reader.h"
#include <fstream>
#include <sstream>
#include <iostream>

Reader::Reader() {}

Reader::~Reader() {}

// Helper function to convert a point to a unique string for indexing
std::string Reader::pointToString(const Point& pt) const {
    std::ostringstream oss;
    oss << pt.getX() << "," << pt.getY() << "," << pt.getZ();
    return oss.str();
}

void Reader::readSTL(const std::string& filename) {
    std::ifstream file(filename);

    // Check if the file could not be opened
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;  // Exit the function early
    }

    std::string line;
    Point vertices[3];  // Store vertices of a triangle
    int vertexCount = 0;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;

        if (line.find("vertex") != std::string::npos) {
            // Read the vertex coordinates
            double x, y, z;
            iss >> word >> x >> y >> z;

            Point pt(x, y, z);
            std::string ptStr = pointToString(pt);

            // Check if the point is unique and store index in pointIndexMap
            if (pointIndexMap.find(ptStr) == pointIndexMap.end()) {
                uniquePoints.push_back(pt);
                pointIndexMap[ptStr] = uniquePoints.size() - 1;
            }

            vertices[vertexCount++] = pt;

            // If we have 3 vertices, we have a triangle
            if (vertexCount == 3) {
                Triangle tri(vertices[0], vertices[1], vertices[2]);
                vertexCount = 0;  // Reset vertex count
            }
        }
    }

    file.close();
}

std::vector<Triangle> Reader::getTriangles() const {
    // Placeholder function to return empty vector
    return {};
}
