#include <iostream>
#include <fstream>
using std::ofstream;
using std::ifstream;
using namespace std;

int main()
{
    ofstream outdata;
    string str;

    getline(cin, str);

    outdata.open("sample.txt");
    outdata << str << endl;
    outdata.close();


    ifstream file("sample.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Cannot open the file.";
    }

    return 0;
}