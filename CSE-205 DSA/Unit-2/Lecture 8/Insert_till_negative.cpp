#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> a;
    int x;

    while(1){
        cin>>x;
        if(x>=0){
            a.push_back(x);
        }
        else{
            break;
        }
    }

    if(a.size()==0){
        cout<<"Linked List is empty.";
    }
    else{
        cout<<"Linked List: ";
        for(int i: a){
            cout<<i<<" ";
        }
    }

    return 0;
}