// You are using GCC
#include <iostream>
using namespace std;

class phone_number{
    
    public:
    static void input_num(){
        
    }
    
    inline void check_num(string num){
        
    }
};

int main(){
    
    phone_number::input_num();
    
    string n;
    cin>>n;
    
    
    int count=0;
    bool valid=0;
    
   for(char digit : n){
       
       if(isdigit(digit)){
        count++;
   }
   
   else{
       valid=1;
       break;
   }
}
    if(valid || count!=10){
        cout<<"Entered Phone number is wrong"<<endl;
    }
    
    cout<<"Your entered number is:"<<n;
    
    return 0;
}