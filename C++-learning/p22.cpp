#include <iostream>
using namespace std;

class Stove{
    private:
        int temperature = 0;
    public:
        Stove(int temperature){
            SetTemperature(temperature);
        }
        int GetTemperature(){
            return temperature;
        }
        void SetTemperature(int temperature){
            this->temperature = temperature;
        }
};

int main (){
    
    Stove stove(0);
    
    //stove.temperature = 10; it doesnt work\
    //because its private

    cout << "Stove temperature is : " << stove.GetTemperature() << "\n";
    
    stove.SetTemperature(200);

    cout << "Stove temperature is : " << stove.GetTemperature() << "\n";

    return 0;
}