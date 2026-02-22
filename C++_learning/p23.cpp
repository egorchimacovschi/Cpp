#include <iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "Eating" << "\n";
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "Barks" << "\n";
    }
};

class Cat : public Animal{
    public:
        void meow(){
            cout << "Meow\n";
        }

};

int main (){
    Dog dog; 
    Cat cat;

    cout << dog.alive << "\n";
    dog.eat(); 
    dog.bark();
    cat.meow();
    return 0;
}