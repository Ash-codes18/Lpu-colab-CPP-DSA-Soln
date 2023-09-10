#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr(n,0);
    int temp;

    cout<<"List after inserting at the end: ";
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
        cout<<temp<<" ";
    }

    int x,ind;

    cin>>x;
    cin>>ind;

    arr.insert(arr.begin()+ind-1,x);

    cout<<endl;
    cout<<"List after inserting at position "<<ind<<": ";
    for(int i:arr){
        cout<<i<<" ";
    }


    return 0;
}