#include "Reader.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

static vector<double> unique_points;  // unique points

vector<Point> Reader::read() {
    vector<Point> point_stack;
    unordered_map<double, int> unique_map;
    ifstream file("F:\\AbhishekSuryawanshiWorkspace\\3.Triangulation\\cube-ascii.stl");
    string line;
    int index = 0;

    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream iss(line);
            string word;
            double x, y, z;

            if (iss >> word >> x >> y >> z) {
                if (word == "vertex") {
                    if (unique_map.find(x) == unique_map.end()) {
                        unique_map[x] = index++;
                        unique_points.push_back(x);
                    }
                    if (unique_map.find(y) == unique_map.end()) {
                        unique_map[y] = index++;
                        unique_points.push_back(y);
                    }
                    if (unique_map.find(z) == unique_map.end()) {
                        unique_map[z] = index++;
                        unique_points.push_back(z);
                    }
                    point_stack.push_back(Point(unique_map[x], unique_map[y], unique_map[z]));
                }
            }
        }
    }

    file.close();
    return point_stack;
}

vector<double> Reader::get_unique_points() {
    return unique_points;
}

