#include <iostream>
using namespace std;

int main(){

    int z;
    cin>>z;
    string n;
    int r,m;

    if(z==-1){
        cout<<" file.open  file.close() fstream";
    }

    cout<<"Reading Student information from the file:"<<endl;

    for(int i=0;i<z;i++){
        cin>>r;
        cin>>n;
        cin>>m;

        cout<<"Roll No.: "<<r<<endl;
        cout<<"Name : "<<n<<endl;
        cout<<"Marks : "<<m<<endl;

    }

    return 0;
}