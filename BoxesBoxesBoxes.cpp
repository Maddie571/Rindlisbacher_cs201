//
// Created by mprindlisbacher on 9/8/2021.
//

#include <iostream>
using std::cout;
using std::endl;

int main(){
    int i = 0;
    while (i < 20){ //part 1: print 1-20
        i++;
        cout << " " << i;
    }

    cout << "\n";
    i = 0; //reset for part 2
    int j = 0;
    while (i < 10){ //part 2: print a 60x10 array of *
        i++;
        while (j < 60){
            j++;
            cout << "*";
        }
        j = 0;
        cout << "\n";
    }

    i = 0; //reset for part 3
    j = 0;
    while (i < 10){ //part 3: make part 2 change symbols
        i++;
        while (j < 30){
            j++;
            cout << "*$";
        }
        j = 0;
        cout << "\n";
    }
    return i;

}

