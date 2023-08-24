// You are using GCC
#include <iostream>
using namespace std;

void output(int a,int b,int c){
    cout<<"x: "<<a<<" y: "<<b<<" z: "<<c<<endl;
}


int& getLargest(int& a, int& b, int& c){
    
    
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
    
}


void shift(int &a, int &b, int &c){
    //create temp variables
    int x,y,z;
    x=a;
    y=b;
    z=c;
    
    //shift
    b=x;
    a=z;
    c=y;
    
    cout<<"After Shift: ";
    output(a,b,c);
}



int main(){
    
    int a,b,c,x;
    cin>>a>>b>>c;
    cin>>x;
    
    cout<<"Before Shift: ";
    output(a,b,c);
    
    shift(a,b,c);
    
    int& m=getLargest(a,b,c);
    m=x;
    cout<<"After modification: ";
    output(a,b,c);
    
    cout<<"The largest value among x, y, and z is: "<<m;
    
    return 0;
}