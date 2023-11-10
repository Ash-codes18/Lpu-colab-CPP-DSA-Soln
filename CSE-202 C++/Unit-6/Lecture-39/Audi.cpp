#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N==-1){
        cout<<"  template <typename T> ";
    }

    map<string, bool> testDriveSlots;

    for (int i = 0; i < N; i++) {
        string date;
        bool isAvailable;
        cin >> date >> isAvailable;

        testDriveSlots[date] = isAvailable;
    }

    string preferredDate;
    cin >> preferredDate;

    if (testDriveSlots.find(preferredDate) != testDriveSlots.end() && testDriveSlots[preferredDate]) {
        cout << "Test Drive Booked Successfully on " << preferredDate << endl;
    } else {
        cout << "Test Drive Slot not available on " << preferredDate << endl;
    }

    return 0;
}
