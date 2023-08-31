#include <iostream>
#include <string>
using namespace std;

class Doctor {
    public:
    string name;
    string address;
    int wardNumber;
};

int main() {
Doctor doctorPassport;
getline(cin, doctorPassport.name);
getline(cin, doctorPassport.address);
cin >> doctorPassport.wardNumber;
cout << "Name: " << doctorPassport.name << endl;
cout << "Address: " << doctorPassport.address << endl;
cout << "Ward Number: " << doctorPassport.wardNumber << endl;
return 0;
}
