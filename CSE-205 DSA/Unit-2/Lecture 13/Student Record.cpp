#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    Student* prev;
    Student* next;
};

Student* head = NULL;

void insertStudent(int rollNumber) {
    Student* newStudent = new Student;
    newStudent->rollNumber = rollNumber;
    newStudent->prev = NULL;
    newStudent->next = NULL;

    if (head == NULL) {
        head = newStudent;
        return;
    }

    if (rollNumber < head->rollNumber) {
        newStudent->next = head;
        head->prev = newStudent;
        head = newStudent;
        return;
    }

    Student* current = head;
    while (current->next != NULL && current->next->rollNumber < rollNumber) {
        current = current->next;
    }

    newStudent->next = current->next;
    newStudent->prev = current;
    if (current->next != NULL) {
        current->next->prev = newStudent;
    }
    current->next = newStudent;
}

void displayStudents() {
    Student* current = head;
    while (current != NULL) {
        cout << current->rollNumber << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int rollNumber;
        cin >> rollNumber;
        insertStudent(rollNumber);
    }
    int m;
    cin >> m;
    insertStudent(m);
    displayStudents();
    return 0;
}