#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string name[n],num[n],search;

    for(int i=0;i<n;i++){

        cin>>name[i];
        cin>>num[i];

    }

    cin>>search;
    int ind=-1;

    for(int i=0;i<n;i++){
        if(search==name[i]){
            ind=i;
            break;
        }
    }

    if(ind!=-1){
        cout<<num[ind];
    }

    else{
        cout<<"Contact not found.";
    }


    return 0;
}