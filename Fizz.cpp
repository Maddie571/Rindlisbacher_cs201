//
// Created by mprindlisbacher on 9/8/2021.
//

#include <iostream>
using std::cout;
using std::endl;

int main(){
    for(int i = 1; i <= 100; i++){
        if (i % 15 == 0){ //seeing if i is divisible by both 3 and 5
            cout << "Fizz Buzz \n";
        } else if (i % 5 == 0) { //if not, check for 5
            cout << "Buzz \n";
        } else if (i % 3 == 0) { //then 3
            cout << "Fizz \n";
        } else {
            cout << i << "\n";
        }
    }
    return 4;
}

