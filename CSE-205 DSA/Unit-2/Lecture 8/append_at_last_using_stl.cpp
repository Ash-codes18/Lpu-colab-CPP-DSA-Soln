#include <iostream>
#include <deque>
using namespace std;

int main(){

    int n;
    cin>>n;
    deque <int> ll;

    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        ll.push_back(z);
    }
    
    cout<<"Created Linked list: ";
    for(int i=n;i>0;i--){
        cout<<ll[i-1]<<" ";
    }
    cout<<endl;

    int x;
    cin>>x;
    ll.push_front(x);
    
    cout<<"Final list: ";
    for(int i=n+1;i>0;i--){
        cout<<ll[i-1]<<" ";
    }


    return 0;
}