#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    unordered_set<int> ans;

    cout<<"Original Linked List: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
        ans.insert(arr[i]);
    }
    

    vector<int> final;
    for(int i:ans){
        final.push_back(i);
    }
    reverse(final.begin(),final.end());

    cout<<endl;
    cout<<"Linked List after removing duplicates: ";

    
    for(int i:final){
        cout<<i<<" ";
    }



    return 0;
}