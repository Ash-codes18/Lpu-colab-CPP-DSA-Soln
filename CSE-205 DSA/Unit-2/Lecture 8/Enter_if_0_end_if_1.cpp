#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> x;

    while(1){
        int n,c;
        cin>>n;
        x.push_back(n);
        cout<<"Node inserted"<<endl;
        cin>>c;
        if(c){
            break;
        }
    }    

    cout<<"Linked list: ";
    for(int i=x.size()-1;i>=0;i--){
        cout<<x[i]<<" ";
    }

    cout<<endl<<"Node ended";

    return 0;
}