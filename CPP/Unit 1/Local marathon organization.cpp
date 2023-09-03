#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void calcDifference(const Time& t1, const Time& t2, Time& result) {
    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = seconds1 - seconds2;
    result.seconds = diffSeconds % 60;
    int totalMinutes = diffSeconds / 60;
    result.minutes = totalMinutes % 60;
    result.hours = totalMinutes / 60;
}

int main() {
        Time t1, t2, result;
    cin >> t1.hours;
    cin.ignore();
    cin >> t1.minutes;
    cin.ignore();
    cin >> t1.seconds;
    cin >> t2.hours;
    cin.ignore();
    cin >> t2.minutes;
    cin.ignore();
    cin >> t2.seconds;
    calcDifference(t1, t2, result);
    cout << setw(2) << setfill('0') << result.hours << ":" <<
    setw(2) << setfill('0') << result.minutes << ":" <<
    setw(2) << setfill('0') << result.seconds << endl;
return 0;
}

//Sushant