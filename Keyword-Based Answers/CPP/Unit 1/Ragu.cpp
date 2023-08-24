#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string gender;
        
    public:
        void initialize(string n, int a, string g){
            name = n;
            age = a;
            gender = g;
        }
        
        void display(){
            transform(name.begin(), name.end(), name.begin(), ::toupper);
            transform(gender.begin(), gender.end(), gender.begin(), ::toupper);
        
            cout << name << " " << age << " " << gender << endl; 
        }
};

int main()
{
    Person person;
    string name, gender;
    int age;
    cin>> name >> age >> gender;
    
    person.initialize(name, age, gender);
    person.display();
    
    return 0;
}
