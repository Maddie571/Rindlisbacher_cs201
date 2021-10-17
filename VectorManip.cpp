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

vector<string> string VectorManip(vector<string> & manip)
{
    string s = "";
    cout << "Enter a bunch of words and enter \" done \" when you're done.";
    while !(s == "done"){
        cin >> s;
    }
    return manip;
}