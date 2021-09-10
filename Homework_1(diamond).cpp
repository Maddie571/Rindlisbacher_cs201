//
// Created by photo on 9/10/2021.
//

#include <iostream>
using std::cout;
using std::endl;

int main(){
    int n;
    cout << "Pick a Number:";
    cin >> n; //get the number of lines
        for (int i = 1; i <= n; i++){
            for (int j = n-i; j >= i; j--;){
                cout << " ";
            }
            cout << "#" << endl;
        }

    return 2;
}

