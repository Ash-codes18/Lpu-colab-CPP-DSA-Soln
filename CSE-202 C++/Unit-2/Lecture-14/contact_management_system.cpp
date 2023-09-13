#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    string b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }

    int f;
    cin>>f;

    int ind=-1;

    for(int i=0;i<n;i++){
        if(a[i]==f){
            ind=i;
            break;
        }
    }

    if(ind!=-1){
        cout<<b[ind];
    }
    else{
        cout<<"Customer not found.";
    }


    return 0;
}