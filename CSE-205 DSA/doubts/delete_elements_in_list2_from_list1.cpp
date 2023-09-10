#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr1[n];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    int arr2[m];

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    cout<<"First Linked List before deletion: ";
    for(int i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                arr1[i]=INT_MIN;
            }
        }
    }


//to check if they both are same
    bool flag=0;
    for(int i:arr1){
        if(i!=INT_MIN){
            flag=1;
            break;
        }
        
    }

    cout<<"First Linked List after deletion: ";

    if(!flag){
        cout<<endl<<"All elements in the first linked list are the same.";
        return 0;
    }
    else{

    for(int i:arr1){
        if(i!=INT_MIN)
        cout<<i<<" ";
    }
    }


    return 0;
}