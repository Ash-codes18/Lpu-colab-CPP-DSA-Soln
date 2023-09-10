#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int bit;
    int sum=0;

    cout<<"Linked List: ";
    
    if(n>0){
    for(int i=0;i<n;i++){    
        cin>>bit;
        cout<<bit<<" ";
        sum+=bit*pow(2,n-i-1);
    }
    }

    else{
        cout<<"Empty linked list";
    }

    cout<<endl;
    cout<<"Decimal Value: "<<sum;


    return 0;
}