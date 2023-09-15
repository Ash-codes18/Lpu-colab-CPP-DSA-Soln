#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int setup() {
  string inputText;
  ofstream myfile("sample.txt");
  if (myfile.is_open()) {
    cin >> inputText;
    myfile << inputText << endl;
    myfile.close();
  } else {
    cout << "Unable to open file";
    return 1;
  }
  return 0;
}

void printFileData() {
  ifstream fin("sample.txt");
  char str[256];
  if (!fin) {
    cout << "Cannot open file for output." << endl;
  } else {
    fin.getline(str, 255);
    cout << str << endl;
    if (!fin.good()) {
      cout << "Error occurred while reading from the file." << endl;
    }
    fin.close();
    if (!fin.good()) {
      cout << "Error occurred while closing the file." << endl;
    }
  }
}

int main() {
  if (setup() != 0) {
    cout << "Error while setting up data" << endl;
    return 0;
  }

  char ch;
  fstream finout("sample.txt");
  if (!finout) {
    cout << "Cannot open file for output." << endl;
    return 0;
  }

  // Write three X's.
  for (int i = 0; i < 3; ++i)
    finout.put('X');
  if (!finout.good()) {
    cout << "Error occurred while writing to the file." << endl;
    return 0;
  }

  // Flush the output buffer.
  finout.flush();

  // Get the next ten characters from the file.
  for (int i = 0; i < 10; ++i) {
    finout.get(ch);
    if (!finout.good()) {
      cout << "Error occurred while reading from the file." << endl;
      return 0;
    }
    cout << ch;
  }
  cout << endl;

  finout.close();
  if (!finout.good()) {
    cout << "Error occurred while closing the file." << endl;
    return 0;
  }

  printFileData();

  return 0;
}
