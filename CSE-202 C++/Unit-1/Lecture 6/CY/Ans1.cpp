// You are using GCC
#include <iostream>
using namespace std;

class Operation{
  
  public:
        int a;
        int b;
        
        void get(){
            cin>>a>>b;
        }
        
        void add(){
            cout<<"Addition of two numbers: "<<a+b<<endl;
        }
        void diff(){
            cout<<"Difference of two numbers: "<<a-b<<endl;
        }
        void prod(){
            cout<<"Product of two numbers: "<<a*b<<endl;
        }
        void di(){
            cout<<"Division of two numbers: "<<a/b<<endl;
        }
        void mod(){
            cout<<"Modulus of two numbers: "<<a%b<<endl;
        }
    
};

int main(){
    
    
    Operation x;
    
    x.get();
    x.add();
    x.diff();
    x.prod();
    x.di();
    x.mod();
    
    return 0;
}