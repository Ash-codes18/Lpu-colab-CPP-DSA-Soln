// You are using GCC
#include <iostream>
using namespace std;

class Rectangle{
    
};

int main(){
    
    static int count;
    int setDimensions;
    
    int n,l,b;
    cin>>n;
    
    cout<<"Total number of rectangles: "<<n;
    
    for(int i=0;i<n;i++){
        cin>>l>>b;
        cout<<"Area of rectangle "<<i+1<<": "<<l*b<<endl;
    }
    
    
    
    
    return 0;
}