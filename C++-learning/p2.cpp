#include <iostream>
using namespace std;

int main (){

    string str;
    int age; 

    cin >> age; //careful because there is \n in input buffer

    getline(cin >> ws/*eliminates \n from input buffer*/, str);
    cout << str << '\n';

    return 0;
}
