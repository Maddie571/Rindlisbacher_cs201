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
float sumVector();

int main()
{
    sumVector();
    return 0;
}
float sumVector(){
    float input = 1; //This feels like very bad form but it still works with an initial input of 0
    float sum = 0;
    vector<float> list;
    while (!(input == 0)){
        cout << "Input your next number, or 0 to end";
        cin >> input;
        list.push_back(input);
    }
    for (int ii = 0; ii < list.size(); ii++){
        sum += list.at(ii);
    }
    cout << "the total of all your numbers is: " << sum;
    return sum;
}