//
// Created by photo on 10/12/2021.
//


#include <iostream>
#include <string>
#include "UserInput.cpp"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string s;
    string check;
    while (!(check == "end")) { // !(expression with ==) is how you do false in c++
        s += check;
        s += " ";
        check = UserInput();
    }
    cout << s;
    return 0;
}