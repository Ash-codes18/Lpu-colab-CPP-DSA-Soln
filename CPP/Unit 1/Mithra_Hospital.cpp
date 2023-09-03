#include <iostream>
using namespace std;

class Doctor{

  public:
    void Print(string name, string addr, int wn){
    cout << "Name: " << name << endl;
    cout << "Address: " << addr << endl;
    cout << "Ward Number: " << wn << endl;
    }

};

int main(){
  string name, addr;
  int wn;

  cin >> name >> addr >> wn;

  Doctor doc;
  doc.Print(name, addr, wn);
}
