#include <iostream>
#include <iomanip>
using namespace std;
class TemperatureConverter{
    private:
    double celsius;
    public:
    void setCelsius(double temp){
        celsius = temp;
    }
    
    double getFahrenheit(){
        return celsius * 9.0 / 5.0 + 32.0;
        
    }
    
    double getKelvin(){
        return celsius + 273.15;
    }
};

int main ()
{
    TemperatureConverter converter;
    double celsius;
    cin >> celsius;
    converter.setCelsius(celsius);
    
    double fahrenheit = converter.getFahrenheit();
    double kelvin = converter.getKelvin();
    cout<< fixed << setprecision(2);
    cout<< "Temperature in Fahrenheit: "<<fahrenheit << endl;
    cout<< "Temperature in Kelvin:  "<< kelvin<<endl;
    return 0;
}