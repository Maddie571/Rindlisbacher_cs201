//
// Created by photo on 9/10/2021.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int Height;
    int PoundSigns = 1;
    cout << "Pick a Number:";
    cin >> Height; //get the number of lines
    for (int Line = Height; Line > 0; Line--){ //top half of diamond
        for (int Spaces = Line; Spaces >= 0; Spaces--){ //the number of spaces needed is the same as the iputed number minus whatever line its currently on
            cout << " ";
        }
        for (int i = 0; i < PoundSigns; i++) {
            cout << "#";
        }
        PoundSigns += 2; //needed pound signs increases by 2 instead of 1 per line
        cout << endl;
    }


    return 2;
}

