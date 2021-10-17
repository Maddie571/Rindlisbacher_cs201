//
// Created by Maddie on 10/17/2021.
//

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
string printSubString(string);

int main()
{
    cout << "Print a word please";
    string help;
    cin >> help;
    printSubString(help);
    return 0;
}
string printSubString(string s) { //monstrosity of nested loops
    vector<char> characters;
    int starter = 0;
    int endpoint = s.size() - 1;
    for (int i = 0; i < s.size(); i++) {
        characters.push_back(s.at(i)); //set up the list of characters
    }
    while (starter < s.size()) { //changes starting letter
        while(endpoint >= 0 ){ //changes amount of letters printed
            for (int j = starter; j <= endpoint; j++){
                cout << s.at(j);
            }
            endpoint --;
            cout << " ";
        }
        starter ++;
        endpoint = s.size() - 1;
        cout << endl;
    }
    return s;
}