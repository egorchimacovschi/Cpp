#include <iostream>
using namespace std;

int main (){
    int car[3];
    int size;
    
    size = sizeof(car);// returns in bytes the size of the variable
    
    cout << size;

    return 0;
}