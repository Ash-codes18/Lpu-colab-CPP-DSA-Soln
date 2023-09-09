#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    int r,a,b,c;
    int m=0;

    for(int i=0;i<n;i++){
        cin>>r>>a>>b>>c;
        cout<<a+b+c<<endl;
        if(a>b && a>c){
            arr[i]=a;
        }
        else if(b>a && b>c){
            arr[i]=b;
        }
        else{
            arr[i]=c;
        }
        if(max<a+b+c){
            max=a+b+c;
            m++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<arr[i];
    }

    cout<<m<<" "<<max;

    return 0;
}