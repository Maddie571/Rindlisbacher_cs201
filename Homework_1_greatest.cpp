//
// Created by photo on 9/11/2021.
//

//input numbers until something less than 1 has been inputted, and return with the highest number
// just run through an if statement after each inputted number, need a safe for if the first number is below 1
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
int greatest = 0;
int count = 0;
int n = 1;
cout << "begin entering numbers, enter 0 to stop \n I'll return your highest input";
while (n > 0){
    cin >> n;
    if (n > greatest){
        greatest = n;
    }
    count ++;
    cout << "Next Number:";
}
if (count > 0) {
    return greatest;
} else {
    cout << "please input at least one number greater than 0";
    return 0;
}
}


