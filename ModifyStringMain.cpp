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
    cout << "How many times would you like to duplicate your word?";
    cin >> duplicates;
    modifyString(s, duplicates);
    cout << s;
    cout << "\nHow many times would you like to duplicate your next word?";
    cin >> duplicates;
    modifyString(s, duplicates);
    cout << s;
    cout << "\nHow many times would you like to duplicate your final word?";
    cin >> duplicates;
    modifyString(s, duplicates);
    cout << s;
    return 0;
}

