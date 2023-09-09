#include <iostream>
#include <list>
using namespace std;

int main(){

    list<string> s;
    int n,z;
    string a,b;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push_back(a);
    }
    cout<<"Current Linked List:"<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cin>>b>>z;
    if(z>0){
    auto it = s.begin();
    advance(it,z-1);
    s.insert(it,b); 
    }

    cout<<"Updated Linked List:"<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }

    return 0;
}