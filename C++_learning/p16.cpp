#include <iostream>
using namespace std;
//recursivity

void walk(int steps){
    if (steps > 0){
        cout << "You made a step\n";
        walk(steps - 1);
    }
}


int main (){

    walk(10);

    return 0;
}