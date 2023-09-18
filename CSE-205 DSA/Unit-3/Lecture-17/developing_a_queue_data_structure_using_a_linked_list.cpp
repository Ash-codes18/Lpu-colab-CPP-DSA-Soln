#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> a;
    int n;

    while(1){
        int n;
        cin>>n;

        if(n==-1){
            break;
        }

        else{
            a.push_back(n);
        }
    }

    cout<<"Dequeued elements: ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    return 0;
}