#include <iostream>
using namespace std;

struct student {
    char name[50];
    int rollno;
    float m1, m2, m3, m4, m5, avg, res;
};

int main() {
    struct student s, *sptr;
    sptr = &s;
    cin >> sptr->name;
    cin >> sptr->rollno;
    cin >> sptr->m1 >> sptr->m2 >> sptr->m3 >> sptr->m4 >> sptr->m5;
    sptr->res = sptr->m1 + sptr->m2 + sptr->m3 + sptr->m4 + sptr->m5;
    sptr->avg = sptr->res / 5;
    cout << "NAME: " << sptr->name << endl;
    cout << "ROLL NO: " << sptr->rollno << endl;
    cout << "RESULT: ";
    if (sptr->m1 >= 50 && sptr->m2 >= 50 && sptr->m3 >= 50 && sptr->m4 >= 50 && sptr->m5 >= 50) {
        cout << "Pass";
        if (sptr->avg >= 75) {
            cout << "\nDistinction";
        } else if (sptr->avg >= 60 && sptr->avg <= 74) {
            cout << "\nFirst Class";
        } else if (sptr->avg >= 50 && sptr->avg <= 59) {
            cout << "\nSecond Class";
        }
    } else {
        cout << "Fail";
    }
    return 0;
}