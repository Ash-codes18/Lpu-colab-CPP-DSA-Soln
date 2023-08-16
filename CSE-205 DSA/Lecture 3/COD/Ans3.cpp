// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int size;
    cin>>size;
    string arr[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
        cout<<endl;
    }
    
    char a;
    cin>>a;
    
    int count=0;
    
    for(int i=0;i<size;i++){
        if(arr[i][0]==a){
            count++;
        }
    }
    
    cout<<"Number of strings starting with the letter "<<a<<" : "<<count;
    return 0;
}