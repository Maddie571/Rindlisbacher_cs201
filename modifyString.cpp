//
// Created by photo on 9/27/2021.
//

#include "modifyString.hpp"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
//changes the string to duplicate itself a number of times equal to input (so an input of 1 will double it, 2 will quadruple, 3 will be x8, 4 is x16 etc.
//note, 40 is too high
int modifyString(string & Word, int input){
    cout << "Enter a Word: ";
    cin >> Word;
    for (int i = 1; i <= input; i++){
        Word = Word + Word;
    }
    return input;
}