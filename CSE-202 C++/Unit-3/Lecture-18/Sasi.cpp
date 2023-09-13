#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    // Setup
    string inputText;
    getline(cin, inputText);
    ofstream outFile("sample.txt");
    if (!outFile.is_open()) {
        cout << "Error while setting up data" << endl;
        return 0;
    }
    outFile << inputText;
    outFile.close();

    // Print File Data
    ifstream inFile("sample.txt");
    if (!inFile.is_open()) {
        cout << "Cannot open file for output." << endl;
        return 0;
    }
    string fileData;
    getline(inFile, fileData);
    inFile.close();
    cout << fileData << endl;

    // File Output
    ofstream outFile2("sample.txt", ios::app);
    if (!outFile2.is_open()) {
        cout << "Cannot open file for output." << endl;
        return 0;
    }
    outFile2 << "XXX";
    outFile2.flush();
    outFile2.close();

    ifstream inFile2("sample.txt");
    if (!inFile2.is_open()) {
        cout << "Cannot open file for output." << endl;
        return 0;
    }
    inFile2.seekg(fileData.length());
    char buffer[11];
    memset(buffer, 0, sizeof(buffer));
    inFile2.read(buffer, 10);
    if (inFile2.fail() && !inFile2.eof()) {
        cout << "Error occurred while reading from the file." << endl;
        return 0;
    }
    inFile2.close();
    cout << "XXX" << buffer << endl;

    return 0;
}
