#include <iostream>
using namespace std;

int mynum = 3; // global variable

void happyBirthday(){
    cout << "Happy birthday" << "\n"; 
}

int odd(int a){
    return a % 2 ?  1 : 0;
}

int main(){

    int num = 3;
    happyBirthday();
    if (odd(num)){
        cout << "odd\n";
    } else {
        cout << "no odd\n";
    }


    string name = "Egor", surname = "Chimacovschi";

    cout << "Hello " << name + " " + surname << "\n";
    return 0;
}