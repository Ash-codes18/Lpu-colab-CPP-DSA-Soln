#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int id[n];
    float amt[n];

    for(int i=0;i<n;i++){
        cin>>id[i]>>amt[i];
    }

    int ind;
    cin>>ind;

    if(ind<n){

        cout<<"Transaction record at index "<<ind<<" has been successfully deleted."<<endl;
        cout<<"Updated transaction records:"<<endl;

        int j=0;
        for(int i=0;i<n;i++){
            if(i!=ind){
                cout<<"Index "<<j<<": Transaction ID: "<<id[i]<<", Amount: "<<amt[i]<<endl;
                j++;
            }
        }
    }


    else{
        cout<<"Invalid index.";
    }

    return 0;
}