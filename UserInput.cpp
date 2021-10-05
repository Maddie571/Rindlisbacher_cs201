//
// Created by photo on 10/5/2021.
//

#include "UserInput.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

string UserInput()
{
        string s;
        cout << "Enter a word, or a keyboard smash, enter 'end' to end";
        cin >> s;
        return s;
}