#include <iostream>
#include <fstream>
using namespace std;

// Constants
const int DESC_SIZE = 31;  // Description size
const int NUM_RECORDS = 5; // Number of records

class Employee
{
public:
    char name[DESC_SIZE];
    int ID;
    Employee() {}
};

int createEmployeeFileWithEmptyRecords()
{
    fstream employee("Employees.dat", ios::out | ios::binary);
    Employee record;
    int employeeCount;
    cin >> employeeCount;
    for (int count = 0; count < employeeCount; count++)
    {
        cin >> record.name;
        cin >> record.ID;
        cout << "Now writing record " << count << endl;
        employee.write(reinterpret_cast<char *>(&record), sizeof(record));
    }

    // Close the file.
    employee.close();
    return 0;
}

int printEmployeeRecords()
{
    Employee record; // To hold an inventory record

    fstream employee("Employees.dat", ios::in | ios::binary);

    // Now read and display the records
    employee.read(reinterpret_cast<char *>(&record), sizeof(record));
    while (!employee.eof())
    {
        cout << "Name: ";
        cout << record.name << endl;
        cout << "ID: ";
        cout << record.ID << endl;

        employee.read(reinterpret_cast<char *>(&record), sizeof(record));
    }

    // Close the file.
    employee.close();
    return 0;
}

int main()
{
    createEmployeeFileWithEmptyRecords();
    printEmployeeRecords();
    return 0;
}