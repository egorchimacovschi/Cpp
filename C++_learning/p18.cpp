#include <iostream>
using namespace std;

struct student{
    string name ;
    double gpa;
    bool enrolled;
};
 // when you pass truct ot a funciton to change it : student &student1
int main (){
    student student1;
    student1.name = "Egor";
    student1.gpa = 3.2;
    student1.enrolled = true ;

    return 0;
}