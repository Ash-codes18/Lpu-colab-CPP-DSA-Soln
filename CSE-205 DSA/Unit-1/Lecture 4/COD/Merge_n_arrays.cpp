// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

void input(int arr[],int n, vector<int> &x){
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x.push_back(arr[i]);
    }
}

int main(){
    
    int n;
    cin>>n;
    vector<int> m;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int arr[x];
        input(arr,x,m);
    }
    
    cout<<"Merged array: ";
    int size=m.size();
    for(int i=0;i<size;i++){
        cout<<m[i]<<" ";
    }
    
    return 0;
}