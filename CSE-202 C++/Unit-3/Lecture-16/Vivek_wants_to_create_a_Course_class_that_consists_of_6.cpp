#include <iostream>
#include <cstring>

using namespace std;

class Test {
private:
    char paper[20];
    int marks;
public:
    Test() {
        strcpy(paper, "Computer");
        marks = 0;
    }
    Test(const char* p) {
        strcpy(paper, p);
        marks = 0;
    }
    Test(int m) {
        strcpy(paper, "Computer");
        marks = m;
    }
    Test(const char* p, int m) {
        strcpy(paper, p);
        marks = m;
    }
    int getMarks(const char* p) {
        if (strcmp(p, paper) == 0) {
            return marks;
        } else {
            return 0;
        }
    }
};

class Course {
private:
    Test tests[6];
public:
    Course() {}
    Course(Test* t) {
        for (int i = 0; i < 6; i++) {
            tests[i] = t[i];
        }
    }
    int getAssessmentSumForPaper(const char* p) {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += tests[i].getMarks(p);
        }
        return sum;
    }
};

int main() {
    Test tests[6];
    for (int i = 0; i < 6; i++) {
        string paperName;
        int marks;
        cin >> paperName >> marks;
        if (paperName == "None") {
            tests[i] = Test(marks);
        } else if (marks == 0) {
            tests[i] = Test(paperName.c_str());
        } else {
            tests[i] = Test(paperName.c_str(), marks);
        }
    }
    Course course(tests);
    cout << "Maths: " << course.getAssessmentSumForPaper("Maths") << endl;
    cout << "Science: " << course.getAssessmentSumForPaper("Science") << endl;
    cout << "Computer: " << course.getAssessmentSumForPaper("Computer") << endl;
    return 0;
}
