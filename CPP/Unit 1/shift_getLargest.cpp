// You are using GCC
#include <iostream>
using namespace std;

void shift(int& a, int& b, int& c){
    int temp = a;
    a = c;
    c = b;
    b = temp;
    
}

int& getLargest(int& a, int& b, int& c, int mod){
    if(a > b && a > c){
        printf("After modification: x: %d y: %d z: %d", mod, b, c);
        printf("The largest value among x, y, and z is: %d", mod);
        return a;
    } else if (b > a && b > c){
        printf("After modification: x: %d y: %d z: %d", a, mod, c);
        printf("The largest value among x, y, and z is: %d", mod);
        
        return b;
    } else {
        printf("After modification: x: %d y: %d z: %d", a, b, mod);
        printf("The largest value among x, y, and z is: %d", mod);
        return c;
    }
}

int main(){
    int x, y, z, mod;
    cin >> x >> y >> z;
    cin >> mod;
    cout << "Before Shift: x: " << x << " y: "<<y<<" z: " << z << endl;
    shift(x, y, z);
    cout << "After Shift: x: " << x << " y: "<<y<<" z: " << z << endl;
    getLargest(x, y, z, mod);
    
}

//flightman69
//sorry the code is messy it was 2 am I barely had any sleep in last 3 days
