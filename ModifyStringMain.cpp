//
// Created by photo on 9/29/2021.
//

#include "modifyString.cpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s;
    int duplicates;
    cin >> duplicates;
    modifyString(s, duplicates);
    cout << s;
    cin >> duplicates;
    modifyString(s, duplicates);
    cout << s;
    cin >> duplicates;
    modifyString(s, duplicates);
    cout << s;
    return 0;
}

