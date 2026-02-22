#include <iostream>
using namespace std;

int main (){

    int *pNum = NULL;

    pNum = new int ;

    cout << pNum << "\n";

    *pNum = 21;

    cout << pNum << " ";
    cout << *pNum << "\n";

    delete pNum;

    return 0;
}