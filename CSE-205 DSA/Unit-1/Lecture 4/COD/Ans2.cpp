// You are using GCC
//not correct
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int n,m;
    cin>>n;
    cin>>m;
    
    int arr[n];
    
    cout<<"Average grades:"<<endl;
    
    for(int j=0;j<n;j++){

        float sum=0.0;

    for(int i=0;i<m;i++){

        cin>>arr[i];
        sum+=arr[i];

    } 

    float ans=sum/(float)m;
    cout<<fixed<<setprecision(1);
    cout<<"Student "<<j+1<<": "<<ans<<endl;

    }
    
    return 0;
}