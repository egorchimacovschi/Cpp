#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "Gas\n";
        }

        void brake(){
            cout << "Stop\n";
        }
};

int main (){

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    cout << car1.make + " " + car1.model + " " +\
     car1.color + " " << car1.year << "\n";

    return 0;
}