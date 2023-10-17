#include <iostream>
using namespace std;

int main(){

    int n,sum=0;
    
    while(1){
        cin>>n;
        if(n==-1){
            break;
        }
        sum+=n;
    }

    cout<<"Sum of all nodes in the BST is "<<sum;

    return 0;
}