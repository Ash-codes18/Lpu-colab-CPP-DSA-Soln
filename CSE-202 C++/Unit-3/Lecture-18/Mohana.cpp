#include <iostream>
#include <fstream>
using namespace std;

ofstream getFileHandleForWriting() {
    ofstream wf("student.dat", ios::out | ios::binary);

    if (!wf) {
        cout << "Cannot open file!" << endl;
    } else {
        return wf;
    }
}

ifstream getFileHandlerForReading() {
    ifstream rf("student.dat", ios::in | ios::binary);

    if (!rf) {
        cout << "Cannot open file!" << endl;
    } else {
        return rf;
    }
}

void closeFile(ifstream& rf) {
    rf.close();

    if (!rf.good()) {
        cout << "Error occurred at reading time!" << endl;
    }
}

void closeFile(ofstream& wf) {
    wf.close();

    if (!wf.good()) {
        cout << "Error occurred at writing time!" << endl;
    }
}

int main() {
    int userValue;
    cin >> userValue;

    ofstream wf = getFileHandleForWriting();
    wf.write(reinterpret_cast<const char*>(&userValue), sizeof(userValue));
    closeFile(wf);

    ifstream rf = getFileHandlerForReading();
    int storedValue;
    rf.read(reinterpret_cast<char*>(&storedValue), sizeof(storedValue));
    closeFile(rf);

    cout << "Stored Value: " << storedValue << endl;
    cout << "Success" << endl;
    return 0;
}
