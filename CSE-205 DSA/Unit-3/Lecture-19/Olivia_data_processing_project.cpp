// You are using GCC
#include <iostream>
#include <deque>
#include <unordered_set>

using namespace std;

int main() {
    deque<int> userIDs;
    unordered_set<int> uniqueIDs;
    int input;

    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }

        if (uniqueIDs.find(input) == uniqueIDs.end()) {
            // This is a new unique user ID
            uniqueIDs.insert(input);
            userIDs.push_back(input);
        }
    }

    for (int userID : userIDs) {
        cout << userID << " ";
    }
    cout << endl;

    return 0;
}