#include <iostream>
#include <vector>
using namespace std;

int find_smallest(vector<float> &a){
    float min = a[0];
    int index = 0;
    for(int i=1;i<a.size();i++){
        if(a[i]<min){
            min = a[i];
            index = i;
        }
    }
    return index;
}


int main(){

    int n;
    cin>>n;

    if(n==0){
        cout<<"Queue is empty";
    }
    
    else{
        vector<float> a;

    for(int i=0;i<n;i++){
        float x;
        cin>>x;
        a.push_back(x);
    }

    int smallest = find_smallest(a);
    a.erase(a.begin()+smallest);
    
    if(a.size()>0){
        for(float i:a){
            cout<<i<<" ";
        }
    }

    }

    return 0;
}

//Ash