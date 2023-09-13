#include <iostream>

using namespace std;

class personType {
public:
    string firstName;
    string lastName;

    personType(string firstName, string lastName) {
        this->firstName = firstName;
        this->lastName = lastName;
    }

    personType() {
        firstName = "";
        lastName = "";
    }

    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    void printFullName() {
        cout << firstName << " " << lastName << endl;
    }
};

class personList {
public:
    int length;
    personType *list;
    int count;

    personList(int length) {
        this->length = length;
        list = new personType[length];
        count = 0;
    }

    void add(personType person) {
        list[count] = person;
        count++;
    }

    int getCountWithoutLastName() {
        int count = 0;
        for (int i = 0; i < this->count; i++) {
            if (list[i].lastName.empty()) {
                count++;
            }
        }
        return count;
    }

    void printFirstNamesWithoutLastName() {
        for (int i = 0; i < this->count; i++) {
            if (list[i].lastName.empty()) {
                cout << list[i].firstName << endl;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;

    personList list(n);

    for (int i = 0; i < n; i++) {
        string firstName, lastName;
        cin >> firstName >> lastName;
        personType person(firstName, lastName);
        list.add(person);
    }

    int count = list.getCountWithoutLastName();
    cout << "Count: " << count << endl;
    list.printFirstNamesWithoutLastName();

    return 0;
}
