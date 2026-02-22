#include <iostream>
using namespace std;

int main (){
    //pointers
    string *pointer = nullptr; 
    //& adress * dereference 
    string name = "egor";
    string *pName = &name;
    cout << &name << " ";
    cout << name << "\n";
    cout << pName << " ";
    cout << *pName << "\n";



    return 0;
}