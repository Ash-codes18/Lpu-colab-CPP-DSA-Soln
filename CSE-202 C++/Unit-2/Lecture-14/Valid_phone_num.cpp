#include <iostream>
using namespace std;

int main(){

    string num;
    cin>>num;

    if(num.length()==12){
        if(num[3]=='-' && num[7]=='-'){
            cout<<"Yes, the phone number is valid."<<endl;
             for(auto i:num){
                if(i!='-'){
                    cout<<i;
                }
            }
        }

        else{
            cout<<"No, the phone number is not valid."<<endl;
        }

    }

        else{
            cout<<"No, the phone number is not valid."<<endl;
        }
   


    return 0;
}