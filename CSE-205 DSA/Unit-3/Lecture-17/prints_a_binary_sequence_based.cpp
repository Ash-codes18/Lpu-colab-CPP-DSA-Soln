#include <iostream>
#include <stack>

using namespace std;

int main(){

    int n;
    cin>>n;

    stack<int> st;

    for(int i=1;i<=n;i++){
        int z=i;
        while(z>0){
            st.push(z%2);
            z/=2;
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<" ";
    }


    return 0;
}