#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    void updateSalary(double newSalary) {
        salary = newSalary;
    }

    void displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    int numEmployees;
    cin >> numEmployees;

    vector<Employee> employees;

    for (int i = 0; i < numEmployees; i++) {
        string name;
        int id;
        double salary;

        cin.ignore(); // Clear the newline character
        getline(cin, name);
        cin >> id >> salary;

        employees.push_back(Employee(name, id, salary));
    }

    int highestPaidIndex = 0;
    for (int i = 1; i < numEmployees; i++) {
        if (employees[i].getSalary() > employees[highestPaidIndex].getSalary()) {
            highestPaidIndex = i;
        }
    }

    employees[highestPaidIndex].displayInfo();

    return 0;
}
