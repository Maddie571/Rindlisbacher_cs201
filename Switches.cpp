//
// Created by photo on 9/10/2021.
//

#include <iostream>
using std::cout;
using std::endl;

int main(){
    for (int i = 1; i <=100; i++){
        switch (i%6) { //essentially a more readable else/if chain
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

    /* for (int i = 1; i <= 100; i++){
        if (i % 6 == 0) {
                cout << "divisible by 6\n";
        } else if (i % 6 == 2 || i % 6 == 4) {
                cout << "divisible by 2 and not 6\n";
        } else if (i % 6 == 3) {
                cout << "divisible by 3 but not 6\n";
        } else {
                cout << "not divisible by 2 or 3\n";
        }
    }
     */
    return 4;
}

