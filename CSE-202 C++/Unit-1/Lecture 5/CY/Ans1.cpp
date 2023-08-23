// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int hrs,min,day,month,year,T;
    
    cin>>hrs>>min>>day>>month>>year;
    
    T=(hrs*60)+min;
    
    if(day>0 && day<32 && month>0 && month<13 && year>1000 && min<60){
        cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
        cout<<"Time:"<<hrs<<" hrs "<<min<<" mins"<<endl;
        cout<<"Total mins:"<<T;
    }
    
    else{
        cout<<"Invalid";
    }
    
    
    
    return 0;
}