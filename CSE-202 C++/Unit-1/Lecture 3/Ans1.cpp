// You are using GCC
#include <iostream>
using namespace std;

class Operation {
    
    public:
    
        int a;
        int b;
        
        void get(){
            cin>>a>>b;
        }
        
        int sum(){
            return a+b;
        }
        
        int dif(){
            return a-b;
        }
        int prod(){
            return a*b;
        }
        int di(){
            if(b==0){
                cout<< "Division by zero not possible"<<endl;
                return 0;
            }
            else{
            return a/b;
            }
        }
        int mod(){
            
            if(b==0){
                cout<<"Division by zero not possible";
                return 0;
            }
            else{
            return a%b;
            }
        }
};



int main(){
        
    Operation x;
    
    x.get();
    
    cout<<"Addition of two numbers: "<<x.sum()<<endl;
    cout<<"Difference of two numbers: "<<x.dif()<<endl;
    cout<<"Product of two numbers: "<<x.prod()<<endl;
    
    
    if(x.b!=0){
    cout<<"Division of two numbers: "<<x.di()<<endl;
    cout<<"Modulus of two numbers: "<<x.mod()<<endl;
    }
    
    else{
        x.di();
        x.mod();
    }
    
    
    return 0;
}