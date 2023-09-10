#include <iostream>
using namespace std;

int main(){

    string s,a,i;
    getline(cin,s);
    getline(cin,a);
    getline(cin,i);

    int ip,ep,ne;
    cin>>ip;
    cin>>ep;
    cin>>ne;

    cout<<"Modified string after append: "<<s.append(a)<<endl;
    cout<<"Modified string after insert:"<<s.insert(ip,i)<<endl;
    cout<<"Modified string after erase:"<<s.erase(ep,ne)<<endl;

    return 0;
}