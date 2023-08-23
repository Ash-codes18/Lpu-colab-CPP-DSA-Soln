#include <iostream>
using namespace std;

class DigitalDiary {
private:
    int hours, minutes, days, months, years;

public:
    void setDateTime(int h, int m, int d, int mo, int y) {
        hours = h;
        minutes = m;
        days = d;
        months = mo;
        years = y;
    }

    bool isValidDateTime() {
        return (days > 0 && days <= 31 && months > 0 && months <= 12 && years > 0 && years < 9999 &&
                hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60);
    }

    void displayFormattedDateTime() {
        if (isValidDateTime()) {
            cout << "Date:" << days << "-" << months << "-" << years << endl;
            cout << "Time:" << hours << " hrs " << minutes << " mins" << endl;
            cout << "Total mins:" << (days * 24 * 60) + (hours * 60) + minutes << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
};

int main() {
    int h, m, d, mo, y;
    cin >> h >> m >> d >> mo >> y;

    DigitalDiary diary;
    diary.setDateTime(h, m, d, mo, y);
    diary.displayFormattedDateTime();

    return 0;
}






















