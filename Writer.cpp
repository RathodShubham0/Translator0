#include "Writer.h"
#include <fstream>
#include <iostream>

Writer::Writer() {}

Writer::~Writer() {}

void Writer::writeToFile(const std::string& filename, const std::vector<Triangle>& triangles) const {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Unable to open output file: " << filename << std::endl;
        return;
    }

    for (const Triangle& triangle : triangles) {
        file << "Triangle:\n";
        triangle.print();  // Write each vertex in the triangle
    }

    file.close();
}
