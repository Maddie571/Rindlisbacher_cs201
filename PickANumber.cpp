//
// Created by mprindlisbacher on 9/3/2021.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    int n;
    cout << "Pick a Number:";
    cin >> n;
    cout << n << " plus 1 is " << n+1 << " and that squared is " << (n+1)*(n+1) << endl; //theres probably a pow function, ^ does a weird thing

    //extras
    int y;
    int m;
    int d;
    cout << "Please state your birth year";
    cin >> y;
    cout << "Now your birth month";
    cin >> m;
    cout << "And the day";
    cin >> d; //collect data
    cout << "You were born on " << m << "/" << d << "/" << y;
    cout << "\nOr, if you're not from the US, China, Mongolia, or Japan";
    cout << "\nYou were born on " << d << "/" << m << "/" << y;
    return n;

}

