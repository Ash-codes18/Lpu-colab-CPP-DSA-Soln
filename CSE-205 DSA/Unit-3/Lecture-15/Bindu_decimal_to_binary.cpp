#include <iostream>
#include <stack>
using namespace std;

int main(){

    int n;
    stack<int> st;

    cin>>n;

    while(n>0){
        if(n%2!=0){
            st.push(1);
        }
        else{
            st.push(0);
        }
        n/=2;
    }

    cout<<"Binary representation: ";
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    

    return 0;
}