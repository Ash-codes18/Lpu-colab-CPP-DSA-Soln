#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Package {
    string destination;
    int priority;

    Package(const string& dest, int pri) : destination(dest), priority(pri) {}

    bool operator>(const Package& other) const {
        return priority > other.priority;
    }
};

int main() {
    int choice;
    string destination;
    int priority;
    priority_queue<Package, vector<Package>, greater<Package>> deliveryQueue;

    while (true) {

        cin >> choice;

        if (choice == 1) {
            cin.ignore(); 
            getline(cin, destination);
            cin >> priority;

            if (deliveryQueue.size() < 5) {
                Package package(destination, priority);
                deliveryQueue.push(package);
                cout << "Package added to the delivery queue." << endl;
            } else {
                cout << "Delivery queue is full. Cannot add more packages." << endl;
            }
        } else if (choice == 2) {
            if (!deliveryQueue.empty()) {
                cout << "Delivered package to: " << deliveryQueue.top().destination << endl;
                deliveryQueue.pop();
            } else {
                cout << "No packages in the delivery queue." << endl;
            }
        } else if (choice == 3) {
            if (!deliveryQueue.empty()) {
                cout << "Next package for delivery: " << deliveryQueue.top().destination << endl;
            } else {
                cout << "No packages in the delivery queue." << endl;
            }
        } else if (choice == 4) {
            cout << "Exiting the application." << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
