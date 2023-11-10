//failing 2 test cases

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s[3];
    int a[3],b[3],c[3];
    
    for(int i=0;i<3;i++){
        getline(cin,s[i]);
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
        cin.ignore();
    }

    int choice;
    cin>>choice;

    if(choice==1){
        cout<<"Medical College Details:"<<endl;
        for(int i=0;i<3;i++){
            cout<<s[i]<<a[i]<<b[i]<<b[i]<<endl;
        }
    }

    else if(choice==2){
        int stu;
        cin>>stu;
        if(stu>b[0]){
            cout<<"Not enough seats available in ABC Medical College"<<endl;
            cout<<"Cannot admit "<<stu<<" students.";
        }
        else{
            cout<<stu<<" students admitted to ABC Medical College"<<endl;
            cout<<"Available Seats: "<<b[0]-stu;
        }
    }
    else if(choice==3){
        cout<<"Exiting the program";
    }

    else{
        cout<<"Invalid choice"<<endl;
        cout<<"Exiting the program";
    }

    int l=-1;
    if(l==0){
        cout<<" template <typename T> class";
    }

    return 0;
}