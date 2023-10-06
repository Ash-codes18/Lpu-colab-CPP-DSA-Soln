#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_set<int> s;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                s.insert(arr[i]);
            }
        }
    }

    if(s.size()==0){
        cout<<-1;
    }


    else{

        vector<int> v;
        for(int i:s){
            v.push_back(i);
        }

        reverse(v.begin(),v.end());

        for(int i:v){
            cout<<i<<" ";
        }
    }


    return 0;
}