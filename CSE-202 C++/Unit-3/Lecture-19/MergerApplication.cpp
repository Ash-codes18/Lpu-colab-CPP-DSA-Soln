#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void writeToFile(const string& filename, const string& content) {
    ofstream file(filename);
    if (file.is_open()) {
        file << content << endl;
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}

void mergeFiles(const string& file1, const string& file2, const string& mergedFile) {
    ifstream input1(file1);
    ifstream input2(file2);
    ofstream output(mergedFile);
    
    if (!input1 || !input2 || !output) {
        cout << "Error loading files" << endl;
        return;
    }
    
    string line;
    while (getline(input1, line)) {
        output << line << " ";
    }
    
    while (getline(input2, line)) {
        output << line;
    }
    
    cout << "The two files were merged into " << mergedFile << " successfully." << endl;
    
    input1.close();
    input2.close();
    output.close();
}

void readData(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Unable to open file for reading: " << filename << endl;
        return;
    }
    
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    
    file.close();
}

int main() {
    string file1, file2, mergedFile;
    string content1, content2;
    getline(cin, file1);
    
    getline(cin, file2);
    getline(cin, mergedFile);
    getline(cin, content1);
    getline(cin, content2);
    
    writeToFile(file1, content1);
    writeToFile(file2, content2);
    
    mergeFiles(file1, file2, mergedFile);
    
    readData(mergedFile);
    
    return 0;
}
