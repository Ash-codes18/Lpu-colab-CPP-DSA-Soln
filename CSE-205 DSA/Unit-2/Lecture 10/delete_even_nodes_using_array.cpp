#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    cout<<"Original Linked List: ";
    for(int i=0 ;i<n;++i)
    {
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Final Linked List: ";
      for(int i=0 ;i<n;++i)
    {
        if(i%2==0)
        cout<<arr[i]<<" ";
    }

    return 0;
}