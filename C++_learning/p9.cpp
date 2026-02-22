#include <iostream>
using namespace std;

string unifier (string students[]){
    return students[0] + students[1] + students[2];
}

int  main (){

    string students[] = {"egor", "vlad", "vitalie"};

    for (string student : students){
        cout << student + "\n";
    }// foreach loop
    cout << unifier(students);
    return 0;
}