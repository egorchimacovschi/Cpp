#include <iostream>
using namespace std;

int main (){
    //fill(begin, end , value)
    int nums[3];

    fill(nums, nums+3, 1);

    for (int num : nums){
        cout << num << " ";
    }

    cout << "\n";

    //usefull for loop to not display empty slt sin arrays

    /*for (int i = 0; !nums[i].empty(); i++){
        cout << num[i] << "\n";
    }*///only for string vectors

    return 0;
}