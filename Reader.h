#pragma once
#include "Point.h"
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Reader {
public:
    string file;

    vector<Point> read();
    vector<double> get_unique_points();
};