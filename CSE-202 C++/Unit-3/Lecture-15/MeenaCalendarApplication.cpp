#include <iostream>
using namespace std;

class Date
{
private:
    int dd, mm, yy;

public:
    Date()
    {
        dd = 31;
        mm = 12;
        yy = 2022;
    }

    // Member function to set the date
    void setDate(int date, int month, int year)
    {
        dd = (date >= 1 && date <= 31) ? date : 30;
        mm = (month >= 1 && month <= 12) ? month : 12;
        yy = (year >= 2023 && year <= 2998) ? year : 2023;
    }

    void display()
    {
        cout << dd << "-" << mm << "-" << yy << "\n";
    }
};

int main()
{
    int d, m, y;
    cin >> d >> m >> y;

    Date date1;
    date1.display();

    // Set the date using the setDate member function
    date1.setDate(d, m, y);
    date1.display();

    return 0;
}