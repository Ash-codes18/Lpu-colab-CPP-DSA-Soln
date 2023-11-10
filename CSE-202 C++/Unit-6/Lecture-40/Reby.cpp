#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> a;
    int n,z;
    if(n==-1){
        cout<<"try catch";
    }

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>z;
        a.push_back(z);
    }

    int index;
    cin>>index;

    if(index>n-1){
        cout<<"Exception occurred!"<<endl;
        cout<<"Not possible to fetch index "<<index;
    }
    
    else{
        cout<<a.at(index);
    }


    return 0;
}