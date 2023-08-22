// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;


class TemperatureConverter{
  public:
  static double getCelsius(){
      return 0.0;
  }  
  static double getFahrenheit(){
      return 0.0;
      
  }  
  static double getKelvin(){
      return 0.0;
      
  }  
    
};


int main(){
    
    double c= TemperatureConverter::getCelsius();
    double f= TemperatureConverter::getFahrenheit();
    double k= TemperatureConverter::getKelvin();
    
    float temp;
    cin>>temp;
    
    float fah=(temp*1.8)+32;
    
    cout<<fixed<<setprecision(2);
    cout<<"Temperature in Fahrenheit: "<<fah<<endl;
    cout<<"Temperature in Kelvin: "<<temp+273.15;
    
    return 0;
}
