#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x > y) ? x : y;
}
//will return the integer because of T
template <typename T, typename U> 
T myMax1(T x, U y){
    return (x > y) ? x : y;
}
//now it automaticly decides what type to return
//and can acces two different type variables
template <typename T, typename U>
auto myMax(T x, U y){
    return (x > y) ? x : y;
}



int main (){

    cout << myMax(1.0, 2.1) << "\n";

    return 0;
}