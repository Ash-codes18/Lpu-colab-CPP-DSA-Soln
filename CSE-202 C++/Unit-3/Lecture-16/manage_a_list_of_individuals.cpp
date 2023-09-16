#include <iostream>
#include <cstring>
using namespace std;

class personType {
public:
    void print() const;
    void setName(string first, string last);
    string getFirstName() const;
    string getLastName() const;

    personType(string first = "", string last = "");

private:
    string firstName;
    string lastName;
};

void personType::print() const {
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const {
    return firstName;
}

string personType::getLastName() const {
    return lastName;
}

personType::personType(string first, string last) {
    firstName = first;
    lastName = last;
}

class personList {
private:
    static const int maxSize = 100;
    personType p[maxSize];
    int count;

public:
    personList(int length) {
        count = length;
    }

    void addPerson(int index, personType p1) {
        p[index] = p1;
    }

    int getNoLastNamersCount() {
        int noLastName = 0;
        for (int i = 0; i < count; i++) {
            if (p[i].getLastName() == "") {
                noLastName++;
            }
        }
        return noLastName;
    }

    void printAllNoLastNamers() {
        for (int i = 0; i < count; i++) {
            if (p[i].getLastName() == "") {
                cout << p[i].getFirstName() << endl;
            }
        }
    }
};

int main() {
    string fname, lname;
    int count;
    cin >> count;
    personList p(count);

    for (int i = 0; i < count; i++) {
        cin >> fname;
        if (i % 2 == 0) {
            personType p1(fname);
            p.addPerson(i, p1);
        } else {
            cin >> lname;
            personType p1(fname, lname);
            p.addPerson(i, p1);
        }
    }

    cout << "Count: " << p.getNoLastNamersCount() << endl;
    p.printAllNoLastNamers();

    return 0;
}