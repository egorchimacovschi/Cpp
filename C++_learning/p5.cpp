#include <iostream>
using namespace std;

int main(){
    char grade = 'A';

    switch (grade)
    {
        case 'A':
            cout << "COngrats\n";
            break;
        default:
            cout << "I'm sorry\n";

    }

    if (grade == 'B'){
        cout << "I'm sorry" << "\n";
    }else {
        cout << "Cograts" << "\n";
    }

    while (grade == 'A'){
        /// execution
    }

    int i = 0;

    for (int i = 1; i <= 3; i++){
        //what to do
    }


    //continue - to skip an iteration
    //break - to break out from the loop
    
    grade == 'A' ? cout << "salut" : cout << "la revedere";
    cout << "\n";

    string name ;
    cin >> name;

    cout << name.length() << '\n';
    if(name.empty()){
        cout << "\n";
    } // returns the if the string is empty or not 

    //name.clear()
    name.append(" 21 y.o");//appends the string at the end for variable

    name.at(1); // returns the certain caracter of string

    name.insert(2, "gor"); // to insert the string at the certain position in another string

    name.find(" ");
    
    name.erase(0, 3);
    return 0;
}