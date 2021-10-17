//
// Created by Maddie on 10/16/2021.
//

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
bool isSorted(vector<int>);

int main()
{
    vector<int> list;
    int input = 1;
    while (!(input == 0)){
        cout << "Input your next number, or 0 to end" << endl;
        cin >> input;
        list.push_back(input);
    }
    list.pop_back();
    isSorted(list);
    return 0;
}
bool isSorted(vector<int> check){
    if(check.at(0) < check.at(check.size() - 1)){ //first cell is smaller than the last, check if its sorted smallest to greatest
        for (int i = 1; i < check.size(); i++){ //loop through to check
            if (check.at(i - 1) > check.at(i)){ //return false if least to most is broken
                cout << "The List is not sorted";
                return false;
            }
        }
    } else if(check.at(0) > check.at(check.size() - 1)){ //repeat for greatest to least
        for (int i = 1; i < check.size(); i++){ //loop through to check
            if (check.at(i - 1) < check.at(i)){ //return false if most to least is broken
                cout << "The List is not sorted";
                return false;
            }
        }
    } else if(check.at(0) == check.at(check.size() - 1)){ //or if endpoints are the same, see if its all the same number
        for (int i = 1; i < check.size(); i++){ //loop through to check
            if (check.at(i - 1) != check.at(i)){ //return false if broken
                cout << "The List is not sorted";
                return false;
            }
        }
    }
        cout << "They're sorted!" << endl; //else, its sorted
        return true;
}