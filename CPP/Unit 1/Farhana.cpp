#include<iostream>
using namespace std;

union Employee{
    int empID;
    char empname[20];
    char dob[10];
    char doj[10];
    float salary;
};

int main(){
    union Employee emp;
    cin>>emp.empID;
    cout<<"ID : "<<emp.empID<<"\n",
    cin>>emp.empname;
    cout<<"Name : "<<emp.empname<<"\n";
    cin>>emp.dob;
    cout<<"DOB : "<<emp.dob<<"\n";
    cin>>emp.doj;
    cout<<"DOJ : "<<emp.doj<<endl;
    cin>>emp.salary;
    cout<<"Salary : "<<emp.salary;
}

//Sushant
