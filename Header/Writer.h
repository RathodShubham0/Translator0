#pragma once
// Writer.h
#ifndef WRITER_H
#define WRITER_H

#include "Triangle.h"
#include <string>
#include <vector>

class Writer {
public:
    Writer();
    ~Writer();

    void writeToFile(const std::string& filename, const std::vector<Triangle>& triangles) const;
};

#endif // WRITER_H


