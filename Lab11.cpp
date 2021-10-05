//
// Created by photo on 10/4/2021.
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string s;
    while (0 == 0){
        cout << "Enter a word, or a keyboard smash";
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if (s.at(i) >= 97 && s.at(i) <= 122){
                cout << s.at(i);
            }
        }
        cout << "\n";
    }
    return 0;
}
