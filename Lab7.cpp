//
// Created by photo on 9/27/2021.
//

#include "intio.cpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "please type an integer:";
    int x = getInt();
    cout << "now your second number:";
    int y = getInt();
    cout << "and your final number:";
    int z = getInt();
    return x*y*z;
}

