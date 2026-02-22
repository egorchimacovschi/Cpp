#include <iostream>
using namespace std;

void output(int num1, int num2){
    cout << num1 << " ";
    cout << num2 << "\n";
}

void swap (int &num1 , int &num2){
    int temp ;
    temp = num1;
    num1 = num2;
    num2 = temp;

}
void swap2 (int num1 , int num2){
    int temp ;
    temp = num1;
    num1 = num2;
    num2 = temp;

}


int main(){
    int num1 = 1;
    int num2 = 2;
    output(num1, num2);

    swap2(num1, num2);
    output(num1, num2);

    swap(num1, num2);
    output(num1, num2);


    return 0;
}