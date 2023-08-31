#include <iostream>
using namespace std;

class Student {
    private:
    static int count;
    int marks[5];
    public:
    static int getCount() {
    return count;
                }
    void setMarks(int m1, int m2, int m3, int m4, int m5) {
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
    marks[3] = m4;
    marks[4] = m5;
    count++;
                    }
    void getMarks(int studentNumber) {
    cout << "Marks of student " << studentNumber << ": ";
    for (int i = 0; i < 5; i++) {
    cout << marks[i] << " ";
    }
    cout << endl;
         }
};

int Student::count = 0;

int main() {
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
    int m1, m2, m3, m4, m5;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    students[i].setMarks(m1, m2, m3, m4, m5);                }
    cout << "Total number of students: " << Student::getCount() << endl;
    for (int i = 0; i < n; i++) {
    students[i].getMarks(i+1);
                            }
        return 0;
}
