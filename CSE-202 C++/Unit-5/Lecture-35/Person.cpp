#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    virtual void displayInfo() = 0;
    virtual double calculateSalary() = 0;
};

class Faculty : public Person {
private:
    double teachingHours;
    double hourlyRate;

public:
    Faculty(string n, int a, double th, double hr) : Person(n, a), teachingHours(th), hourlyRate(hr) {}

    void displayInfo() {
        cout << "Faculty Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Teaching Hours: " << teachingHours << endl;
        cout << "Salary: " << fixed << setprecision(2) << calculateSalary() << endl;
    }

    double calculateSalary() {
        return teachingHours * hourlyRate;
    }
};

class Staff : public Person {
private:
    double monthlyPay;

public:
    Staff(string n, int a, double mp) : Person(n, a), monthlyPay(mp) {}

    void displayInfo() {
        cout << "Staff Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << fixed << setprecision(2) << calculateSalary() << endl;
    }

    double calculateSalary() {
        return monthlyPay;
    }
};

int main() {
    string name;
    int age;
    double value1, value2;

    cin >> name >> age >> value1 >> value2;

    Faculty faculty(name, age, value1, value2);

    cin >> name >> age >> value1;

    Staff staff(name, age, value1);

    faculty.displayInfo();
    staff.displayInfo();

    return 0;
}
