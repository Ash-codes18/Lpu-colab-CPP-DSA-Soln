#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n;
    cin>>m;

    int a;
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a;
            cout<<a<<" ";
            sum+=a;
        }
    cout<<"  SUM: "<<sum<<endl;
    sum=0;
    }

    return 0;
}