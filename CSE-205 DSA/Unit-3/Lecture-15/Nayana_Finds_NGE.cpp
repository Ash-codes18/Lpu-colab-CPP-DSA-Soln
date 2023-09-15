#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){

        if(i==n-1){
            cout<<arr[i]<<" "<<-1;
        }
        else{
            bool flag=0;

            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    flag=1;
                    break;
                }
            }
        if(!flag){
            cout<<arr[i]<<" "<<-1<<endl;
        }

        }

    }
    

    return 0;
}