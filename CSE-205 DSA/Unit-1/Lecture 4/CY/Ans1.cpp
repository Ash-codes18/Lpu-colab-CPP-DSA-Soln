// You are using GCC
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    string arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m;
    cin>>m;
    string arr2[m];
    
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    string arr3[n+m];
    int count =0;
    
    for(int i=0;i<n;i++){
        arr3[i]=arr[i];
        count++;
    }
    
    
    for(int i=0;i<m;i++){
        arr3[count]=arr2[i];
        count++;
    }
    
    sort(arr3,arr3+count);
    
    cout<<"Merged and sorted array: ";
    for(int i=0;i<count;i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}