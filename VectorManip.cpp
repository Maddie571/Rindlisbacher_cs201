//
// Created by photo on 10/12/2021.
//

#include "VectorManip.hpp"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

vector<string> VectorManip(vector<string> & manip)
{
    for(int i = 0; i < manip.size(); i++){
        cout << manip.at(i) << " ";
    }
    return manip;
}