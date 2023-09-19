#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    int fq;
    cin>>fq;

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==fq){
            count++;
        }
    }

    cout<<"Occurrences of "<<fq<<" in the queue: "<<count;



    return 0;
}