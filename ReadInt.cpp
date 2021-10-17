//
// Created by Maddie on 10/17/2021.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stringstream;
int ReadInt(string, int, int);

int main()
{
    ReadInt("Please enter your password, then press pound. (Don't press pound just hit enter)", 3, 81);
    return 0;
}
int ReadInt(string prompt, int min, int max) {
    string input;
    bool check = true;
    while(0 == 0) {
        cout << prompt << endl;
        cin >> input;
        for (int i = 0; i < input.size(); i++){
            if (!(isdigit(input.at(i)))){
                i = input.size();
                check = false;
            }
        }
        if(check){
            stringstream number(input);
            int final = 0;
            number >> final;
            if(final >= min && final <= max){
                cout << "Good job!";
                return 1;
            }
        }
        cout << "Sorry, try again" << endl;
        cin.clear();
        check = true;
    }
    return 2;

}