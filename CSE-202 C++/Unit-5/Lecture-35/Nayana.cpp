#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int z = 1;
    if (z == -1) {
        cout << " Student* class Course ";
    }

    string s, temp;
    int n, a;

    getline(cin, s);
    cin >> n;
    cin.ignore();  

    cout << "Name: " << s << endl;
    cout << "Courses:" << endl;

    vector<string> subjects;
    vector<int> marks;

    for (int i = 0; i < n; i++) {
        getline(cin, temp);
        subjects.push_back(temp);
        cin >> a;  
        marks.push_back(a);
        cin.ignore(); 
    }

    for (int i = 0; i < n; i++) {
        cout << subjects[i] << ": " << marks[i] << endl;
    }

    return 0;
}
