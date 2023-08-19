// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int s;
    cin>>s;
    int ans=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            ans=i;
        }
    }
    
    if(ans!=-1){
    cout<<"Element "<<s<<" is present at index "<<ans;
    }
    
    else{
       cout<<"Element "<<s<<" is not present"; 
    }
    
    return 0;
}