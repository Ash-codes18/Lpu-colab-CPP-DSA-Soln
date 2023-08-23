#include <iostream>
using namespace std;

class dayOfWeek {
public:
    int dayNumber; 

    void inputDay() {
        cin >> dayNumber;
    }
    
    void printDay() {
        if (dayNumber == 1)
            cout << "Sunday";
        else if (dayNumber == 2)
            cout << "Monday";
        else if (dayNumber == 3)
            cout << "Tuesday";
        else if (dayNumber == 4)
            cout << "Wednesday";
        else if (dayNumber == 5)
            cout << "Thursday";
        else if (dayNumber == 6)
            cout << "Friday";
        else if (dayNumber == 7)
            cout << "Saturday";
        else if (dayNumber == 0)
            cout << "Weekend";
        else
            cout << "Invalid";
    }
};

int main() {
    dayOfWeek obj;
    obj.inputDay(); 
    obj.printDay(); 
    
    return 0;
}