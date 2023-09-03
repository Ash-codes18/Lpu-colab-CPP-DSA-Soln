#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> s1;
    vector<int> s2;
    vector<int> common;

    int n1, n2;
    cin >> n1;

    for(int i = 0; i < n1; i++){
        int input;
        cin>>input;
        s1.push_back(input);
    }
    
    cin >> n2;
    
    for(int i = 0; i < n2; i++){
        int input;
        cin>>input;
        s2.push_back(input);
    }
    
    int i1=0,i2=0;

    while(i1<n1 && i2<n2){
        if(s1[i1]==s2[i2]){
            common.push_back(s1[i1]);
            i1++;
            i2++;
        }
        else{
            i1++;
        }
    }
    
    for(int x : common){
        cout << x << " ";
    }
}
