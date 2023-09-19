#include <iostream>
#include <vector>
using namespace std;

int main(){

    int z;
    cin>>z;
    int arr[z+1];
    int i=0;

    while(1){
        cin>>arr[i];
        if(arr[i]==-1){
            break;
        }
        i++;
    }

    int hi=z-1;
    int lo=0;

    while(hi>=lo){
        if(hi==lo){
            cout<<arr[hi];
        }
        else{
        cout<<arr[lo]<<" "<<arr[hi]<<" ";
        }
        hi--;
        lo++;
    }

    return 0;
}