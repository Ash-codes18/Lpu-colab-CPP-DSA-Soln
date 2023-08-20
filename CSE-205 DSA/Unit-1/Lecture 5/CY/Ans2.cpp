// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int r,c;
    cin>>r>>c;
    int arr[r*c];
    
    for(int i=0;i<r*c;i++){
        cin>>arr[i];
    }
    
    cout<<arr[(r*c)/2];
    
    return 0;
}