//
// Created by photo on 10/4/2021.
//

#include <iostream>
using std::cout;
using std::endl;
bool isDiv3(int check); //must declare funtion prototypes in lines above where theyre first called

int main()
{
    for(int i = 1; i <= 40; i++){
        if(isDiv3(i) == true){
            cout << i << "\n";
        }
    }
    return 0;
}

bool isDiv3(int check){
    if (check % 3 == 0){
        return true;
    } else {
        return false;
    }
}