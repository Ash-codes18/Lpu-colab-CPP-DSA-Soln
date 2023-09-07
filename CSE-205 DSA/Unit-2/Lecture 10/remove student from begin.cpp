// using single linked list manage the student record. the program should create a list of student records, deketing first student records and printing the the remaining list of student records, students IDs

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int id;
    Student *next;
};

class StudentList
{
private:
    Student *head;
public:
    StudentList()
    {
        head = NULL;
    }
    void addStudent(int id)
    {
        Student *newStudent = new Student;
        newStudent->id = id;
        newStudent->next = NULL;
        if (head == NULL)
        {
            head = newStudent;
        }
        else
        {
            Student *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newStudent;
        }
    }
    void deleteStudent()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Student *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void printList()
    {
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else
        {
            Student *temp = head;
            while (temp != NULL)
            {
                cout << temp->id <<" ";
                temp = temp->next;
            }
        }
    }
};

int main(){
    int n;
    StudentList list;
    cin>>n;
    for(int i=0;i<n;i++){
        int id;
        cin>>id;
        list.addStudent(id);
    }
    list.deleteStudent();
    list.printList();
    return 0;    
}