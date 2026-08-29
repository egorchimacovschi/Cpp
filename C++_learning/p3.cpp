#include <iostream>
#include <cmath>
using namespace std;

int main (){    
    float x = 3.14, y = 4.15;
    float z;
    z = max(x, y);// without other libraries
    z = min(x, y);// without oher libraries

    /*Including cmath library*/
    z = pow (2,3);
    z = sqrt (9);
    z = abs (-3); // =3
    z = round (x); //3
    z = ceil (x); // 4
    z = floor (x); //3

    return 0;
}