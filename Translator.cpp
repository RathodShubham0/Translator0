#include <iostream>
#include "Reader.h"
#include "Writer.h"

int main() {
    Reader reader;
    std::string filename = "cube.stl";

    std::cout << "Reading file: " << filename << std::endl;

    reader.readSTL(filename);

    // Continue only if the STL file was successfully read
    std::vector<Triangle> triangles = reader.getTriangles();
    if (triangles.empty()) {
        std::cerr << "Error: No triangles were read from the STL file!" << std::endl;
        return 1;  // Exit program with an error code
    }

    Writer writer;
    writer.writeToFile("output.dat", triangles);

    std::cout << "STL file processed and saved to output.dat!" << std::endl;

    return 0;
}
