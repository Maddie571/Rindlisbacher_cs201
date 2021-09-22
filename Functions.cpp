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
    cout << "Pick a word, any word, but only 1 word";
    string s = "";
    cin >> s;
    DoThing(s);
    return 6;
}

void DoThing(string Word) {
    cout << "Your word is:";
    cout << Word << endl;
    cout << Word.size();
    cout << " Letters long!";
}

