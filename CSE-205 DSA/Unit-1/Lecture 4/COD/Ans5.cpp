// You are using GCC
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    cin.ignore();
    string arr[n];
    
    for(int i=0;i<n;i++){
        getline(cin,arr[i]);
    }
    
    int m;
    cin>>m;
    cin.ignore();
    string arr2[m];
    
    for(int i=0;i<m;i++){
        getline(cin,arr2[i]);
    }
    
    string arr3[n+m];
    int count=0;
    
    for(int i=0;i<n;i++){
        arr3[i]=arr[i];
        count++;
    }
    
    for(int i=0;i<m;i++){
        arr3[count]=arr2[i];
        count++;
    }
    
    cout<<"Catalog:"<<endl;
    
    for(int i=0;i<count;i++){
        cout<<arr3[i]<<endl;
    }
    
    
    
    return 0;
}