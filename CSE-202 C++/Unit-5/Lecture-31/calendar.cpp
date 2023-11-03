#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int getDayOfWeek(int day, int month, int year) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    int dow = (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
    return dow == 0 ? 7 : dow;
}

int main() {
    int month, year;
    // cout << "Enter month (1-12): ";
    cin >> month;
    // cout << "Enter year: ";
    cin >> year;
    
    if (month < 1 || month > 12||year<0) {
        cout << "Invalid input. Please enter a valid month (1-12) and year." << endl;
        return 1;
    }
    
    int daysInMonth = getDaysInMonth(month, year);
    int firstDayOfWeek = getDayOfWeek(1, month, year);
    cout<<"=========================";
    cout<<"\n\t"<<month<<"/"<<year<<" Calendar";
    cout<<"\n=========================\n";
    cout << setw(4) << left << "Mon" << setw(4) << left << "Tue" << setw(4) << left << "Wed"
    << setw(4) << left << "Thu" << setw(4) << left << "Fri" << setw(4) << left << "Sat"
    << setw(4) << left << "Sun" << endl;
    
    int dayOfWeek = 1;
    for (int day = 1; day <= daysInMonth; day++) {
        if (day == 1) {
            cout << setw(4*(firstDayOfWeek-1)) << "";
        }
        cout << setw(4) << left << day;
        if (dayOfWeek == 7) {
            cout << endl;
            dayOfWeek = 1;
        } else {
            dayOfWeek++;
        }
    }
    if (dayOfWeek != 1) {
        cout << endl;
    }
    
    return 0;
    cout<<"new delete";
}


// Arin Prashar