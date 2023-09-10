#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    int rollno;
    int mark1;
    int mark2;
    int mark3;

    Student(int rollno, int mark1, int mark2, int mark3) {
        this->rollno = rollno;
        this->mark1 = mark1;
        this->mark2 = mark2;
        this->mark3 = mark3;
    }

    int totalMarks() const {
        return mark1 + mark2 + mark3;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++) {
        int rollno, mark1, mark2, mark3;
        cin >> rollno >> mark1 >> mark2 >> mark3;
        students.push_back(Student(rollno, mark1, mark2, mark3));
    }

    for (const Student& student : students) {
        cout << student.totalMarks() << endl;
    }

    auto maxMark1 = max_element(students.begin(), students.end(), [](const Student& a, const Student& b) { return a.mark1 < b.mark1; });
    auto maxMark2 = max_element(students.begin(), students.end(), [](const Student& a, const Student& b) { return a.mark2 < b.mark2; });
    auto maxMark3 = max_element(students.begin(), students.end(), [](const Student& a, const Student& b) { return a.mark3 < b.mark3; });
    auto maxTotalMarks = max_element(students.begin(), students.end(), [](const Student& a, const Student& b) { return a.totalMarks() < b.totalMarks(); });

    cout << maxMark1->rollno << ' ' << maxMark1->mark1 << endl;
    cout << maxMark2->rollno << ' ' << maxMark2->mark2 << endl;
    cout << maxMark3->rollno << ' ' << maxMark3->mark3 << endl;
    cout << maxTotalMarks->rollno << ' ' << maxTotalMarks->totalMarks() << endl;

    return 0;
}
