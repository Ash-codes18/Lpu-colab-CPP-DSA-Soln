// You are using GCC
//partially correct
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int arr3[n+m];
    int count=0;
    
    for(int i=0;i<n;i++){
        arr3[i]=arr[i];
        count++;
    }
    
    for(int i=0;i<m;i++){
        arr3[count]=arr2[i];
        count++;
    }
    
    sort(arr3,arr3+n+m);
    
    int max=arr3[0];
    for(int i=0;i<n+m;i++){
        if(arr3[i]>max){
            max=arr3[i];
        }
    }
        cout<<max;
    
    return 0;
}