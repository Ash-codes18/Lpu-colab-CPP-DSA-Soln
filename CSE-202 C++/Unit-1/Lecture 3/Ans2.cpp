// You are using GCC
#include <iostream>
using namespace std;

class AddAmount{
    
    public:
    
            int a=50;
            int amt;
            
            void get(){
                cin>>amt;
            }
    
            int ans(){
                return amt+a;
            }
};


int main(){
    
    AddAmount x;
    
    x.get();
    cout<<x.ans();
    
    
    return 0;
}