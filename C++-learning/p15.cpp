#include <iostream>
using namespace std;

int main (){

    string *sir = nullptr;

    sir = new string[2];

    for (int i = 0; i < 2; i++){
        getline(cin, sir[i]);
    }

    for (int i = 0; i < 2; i++ ){
        cout << sir[i] + " ";
    }

    cout << "\n";

    delete[] sir; // to delete dynamic alocated array

    return 0;
}