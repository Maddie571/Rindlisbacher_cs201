//
// Created by photo on 9/10/2021.
//

//
// Created by mprindlisbacher on 9/8/2021.
//

#include <iostream>
using std::cout;
using std::endl;

int main(){
    for (int i = 0; i <100; i++){
        switch (i%6) {
            case 0:
                cout << "divisible by 6\n";
                break;
            case 2:
            case 4:
                cout << "divisible by 2 and not 6\n";
                break;
            case 3:
                cout << "divisible by 3 but not 6\n";
                break;
            default:
                cout << "not divisible by 2 or 3\n";
                break;
        }
    }
    return 4;
}

