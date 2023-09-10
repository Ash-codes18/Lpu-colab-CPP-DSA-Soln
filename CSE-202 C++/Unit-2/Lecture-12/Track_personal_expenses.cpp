#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

class Expense {
public:
    string category;
    double amount;
    string date;

    Expense(string category, double amount, string date) {
        this->category = category;
        this->amount = amount;
        this->date = date;
    }
};

int main() {
    int numExpenses;
    cin >> numExpenses;

    vector<Expense> expenses;
    for (int i = 0; i < numExpenses; i++) {
        string category;
        double amount;
        string date;
        cin >> category >> amount >> date;
        expenses.push_back(Expense(category, amount, date));
    }

    map<string, double> categoryToExpenses;
    for (const Expense& expense : expenses) {
        categoryToExpenses[expense.category] += expense.amount;
    }

    double totalExpenses = 0.0;
    for (const Expense& expense : expenses) {
        totalExpenses += expense.amount;
    }

    string category;
    cin >> category;

    double categoryExpenses = categoryToExpenses[category];

    cout << fixed << setprecision(2);
    cout << "Total Expenses: " << totalExpenses << endl;
    cout << category<<": "<< categoryExpenses << endl;

    return 0;
}
