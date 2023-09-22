#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    int priority;
    int deadline;
    string name;

    Task(int p, int d, const string& n) : priority(p), deadline(d), name(n) {}

    bool operator<(const Task& other) const {
        if (priority != other.priority) {
            return priority > other.priority; 
        }
        return deadline < other.deadline; 
    }
};

int main() {
    int n;
    cin >> n;
    vector<Task> tasks;

    for (int i = 0; i < n; i++) {
        int priority, deadline;
        string name;
        cin >> priority >> deadline >> name;
        tasks.emplace_back(priority, deadline, name);
    }

    sort(tasks.begin(), tasks.end());

    cout << "Executed Tasks:" << endl;
    for (const Task& task : tasks) {
        cout << task.name << endl;
    }

    return 0;
}
