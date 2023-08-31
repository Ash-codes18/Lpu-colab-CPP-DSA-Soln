// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

struct Student{
    
};

void io(){
    
    cin.ignore();
    string s;
    getline(cin,s);
    int n;
    double marks;
    double sum=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>marks;
        sum+=marks;
    }
    
    cout<<"Name: "<<s<<endl;
    cout<<"Average marks: "<<sum/n<<endl;
    
}

int main(){
    
    Student* s;
    
    int n;
    cin>>n;
    
    cout<<fixed<<setprecision(2);
    cout<<"Student Details: "<<endl;
    
    for(int i=0;i<n;i++){
        io();
    }
    
    
    return 0;
}