#include <iostream>
using namespace std;


class Student{
    public:
        string name;
        int age;
        double gpa;
        //Constructor part

    Student(string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    //if you asign in another way variable from paramet
    //you can write without this->
};

int main (){

    Student student("Egor", 20 , 10.0);

    cout << student.name << "\n";
    cout << student.age << "\n";
    cout << student.gpa << "\n";

    return 0;
}