#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans=1;

    int i=1;

    while(ans<n){
        ans=ans*i;
        i++;
    }

    cout<<n<<" ";
    
    if(i%2==0){
        cout<<"John wins";
    }

    else{
        cout<<"Michael wins";
    }

    return 0;
}