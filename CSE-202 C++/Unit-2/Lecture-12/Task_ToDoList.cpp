#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    string task,date;
    int finish;

    for(int i=0;i<n;i++){

        getline(cin,task);
        cin>>date;
        cin>>finish;
        cin.ignore();

        if(!finish){
            cout<<task<<endl;
        }
    }



    return 0;
}