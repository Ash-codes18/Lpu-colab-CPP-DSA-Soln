// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

void cf(int arr[], int n){
    
    vector<bool> visited(n,false);
    cout<<"Element Frequency"<<endl;
    for(int i=0;i<n;i++){
        if(visited[i]==true)
            continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
    
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        
    }
    cf(arr,n);
    
    
    return 0;
}