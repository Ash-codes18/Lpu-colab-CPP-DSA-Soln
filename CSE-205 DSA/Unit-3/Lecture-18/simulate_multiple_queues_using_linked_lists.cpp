#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    int ele;

    cin>>n;
    vector<vector<int>> x(n);
    cin>>ele;

    int a,b;

    for(int i=0;i<ele;i++){
        cin>>a>>b;
        x[b].push_back(a);
    }

    for(int i=0;i<n;i++){
        cout<<"Queue "<<i<<": ";
        for(int j=0;j<x[i].size();j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//Ash