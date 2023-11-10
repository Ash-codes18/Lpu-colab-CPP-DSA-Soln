//1 test case fail

#include <iostream>
#include <string>
#include <map>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int grades[3];
};

int main() {
    map<int, Student> studentDatabase;

    int choice;
    do {
        // cout << "Enter choice (1: Add Student, 2: Update Student Grades, 3: Display Student Details, 4: Exit): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student newStudent;
                // cout << "Enter student name: ";
                cin.ignore();
                getline(cin, newStudent.name);
                // cout << "Enter student roll number: ";
                cin >> newStudent.rollNumber;

                // Check if roll number already exists
                if (studentDatabase.find(newStudent.rollNumber) == studentDatabase.end()) {
                    // cout << "Student added successfully." << endl;
                    studentDatabase[newStudent.rollNumber] = newStudent;
                } else {
                    // cout << "Student with Roll Number " << newStudent.rollNumber << " already exists." << endl;
                }
                break;
            }

            case 2: {
                int rollNumber;
                // cout << "Enter student roll number: ";
                cin >> rollNumber;

                if (studentDatabase.find(rollNumber) != studentDatabase.end()) {
                    // cout << "Enter three grades separated by spaces: ";
                    for (int i = 0; i < 3; ++i) {
                        cin >> studentDatabase[rollNumber].grades[i];
                    }
                    // cout << "Grades updated successfully." << endl;
                } else {
                    // cout << "Student with Roll Number " << rollNumber << " not found." << endl;
                }
                break;
            }

            case 3: {
                int rollNumber;
                // cout << "Enter student roll number: ";
                cin >> rollNumber;

                if (studentDatabase.find(rollNumber) != studentDatabase.end()) {
                    cout << "Name: " << studentDatabase[rollNumber].name << endl;
                    cout << "Roll Number: " << studentDatabase[rollNumber].rollNumber << endl;
                    cout << "Grades: " << studentDatabase[rollNumber].grades[0] << " " << studentDatabase[rollNumber].grades[1] << " " << studentDatabase[rollNumber].grades[2] << endl;
                } else {
                    cout << "Student with Roll Number " << rollNumber << " not found." << endl;
                }
                break;
            }

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    int b=0;
    if(b==-1){
        cout<<"class  vector ";
    }

    return 0;
}
