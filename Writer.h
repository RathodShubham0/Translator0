#pragma once
#include "Triangle.h"
#include <vector>
#include <string>
using namespace std;

class Writer {
public:
    string file;

    Writer();
    ~Writer();

    void write(const vector<Triangle>& triangles, const vector<double>& unique_points);
};