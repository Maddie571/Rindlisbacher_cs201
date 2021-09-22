//
// Created by Matt RIndlisbacher on 9/21/2021.
//

#include <iostream>

void DoThing(std::string s);

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    string s = "";
    cin >> s;
    DoThing(s);
    return 2;
}

void DoThing(string Word) {
    cout << Word << endl;
    cout << Word.size();
}

