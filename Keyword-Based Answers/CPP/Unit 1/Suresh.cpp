#include<iostream>
#include<string>
using namespace std;

class Input{
    public:
        string name;
        int rollnum;
        
};

int main(){
    Input student;
    
    getline(cin, student.name);
    cin>> student.rollnum;
    
    cout << student.rollnum << " : " << student.name << endl;
    
    return 0;
}