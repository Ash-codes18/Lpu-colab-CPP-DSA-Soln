#include <iostream>
#include <map>
using namespace std;

int main(){

    map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;


    string a;
    cin>>a;

    int sum=0;

    for(int i=0;i<a.size();i++){
       auto it = mp.find(a[i]);
         if(it!=mp.end()){
              sum+=it->second;
         }
       
    }
    cout<<"Equivalent decimal number: "<<sum;


    return 0;
}