#include<iostream>
using namespace std;

int main()
{
    int totalAttendees;
    cin >> totalAttendees;
    
    int day1 = (2*totalAttendees) / 7;
    int day2 = day1 *2;
    int day3 = day1/2;
    
    cout << "Number of attendees on day 1: " << day1 << endl;
    cout << "Number of attendees on day 2: " << day2 << endl;
    cout << "Number of attendees on day 3: " << day3 << endl;
    
    return 0;
}