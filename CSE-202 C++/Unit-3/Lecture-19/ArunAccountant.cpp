#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employee
{
    int employeeID;
    string name;
    int age;
};

void createFile(const string &filename)
{
    ofstream file(filename);
    if (!file)
    {
        cout << "Error creating file " << filename << endl;
        return;
    }
    file.close();
    cout << "File " << filename << " created successfully!" << endl;
}

void addEmployee(const string &filename, const Employee &employee)
{
    ofstream file(filename, ios::app);
    if (!file)
    {
        cout << "Error opening file " << filename << endl;
        return;
    }
    file << employee.employeeID << ',' << employee.name << ',' << employee.age << '\n';
    file.close();
}

void displayEmployees(const std::string &filename)
{
    ifstream file(filename);
    if (!file)
    {
        cout << "Error opening file " << filename << endl;
        return;
    }
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}

int main()
{
    int numEmployees;
    cin >> numEmployees;
    cin.ignore(); // Ignore the newline character left in the input buffer

    string filename = "employees.txt";
    createFile(filename);

    // Adding employees
    for (int i = 0; i < numEmployees; i++)
    {
        Employee emp;

        cin >> emp.employeeID;

        cin.ignore(); // Ignore the newline character left in the input buffer

        getline(cin, emp.name);

        cin >> emp.age;

        addEmployee(filename, emp);
    }

    // Displaying all employees
    cout << "List of Employees:" << endl;
    displayEmployees(filename);

    return 0;
}