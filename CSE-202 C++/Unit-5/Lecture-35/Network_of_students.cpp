// Failing 1 test case

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    vector<int> friends;

    Student(const string& n) : name(n) {}
};

int main() {
    int N;
    cin >> N;

    vector<Student> students;
    students.reserve(N);

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        students.push_back(Student(name));
    }

    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;

        for (int j = 0; j < K; j++) {
            int friendIndex;
            cin >> friendIndex;
            students[i].friends.push_back(friendIndex - 1);
        }
    }

    double totalFriends = 0;
    for (const Student& student : students) {
        totalFriends += student.friends.size();
    }

    double averageFriends = (N > 0) ? totalFriends / N : 0;

    cout.precision(2);
    cout << "Average number of friends among all students: " << fixed << averageFriends << endl;

    return 0;
}
