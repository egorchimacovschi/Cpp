#include <iostream>
using namespace std;

class Human{
    public:
        string Name = "Egor";
        string Occupation = "Software Engineer";
        int age = 20;

        void eat (){
            cout << "eats\n";
        }
        void drink(){
            cout << "drinks\n";
        }

};


int main (){
    Human Human1;

   cout << Human1.Name << "\n";
   cout << Human1.Occupation << "\n";
   cout << Human1.age << "\n";
   cout << Human1.Name + " ";
   Human1.eat();

    return 0;
}