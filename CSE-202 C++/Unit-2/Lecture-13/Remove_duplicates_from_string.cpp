#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(string &s,int n){
    string ans="";           
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(s[i]==s[j]){   
                    break; 
                }          
                
            }
            if(j==i){       
                ans+=s[i];  
            }               
        }
    cout<<ans;
}

int main(){
    string s;
    cin>>s;
    removeDuplicates(s,s.size());
}


