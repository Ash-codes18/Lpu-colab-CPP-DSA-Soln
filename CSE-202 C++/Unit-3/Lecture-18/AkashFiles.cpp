#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int setup()
{

    string inputText;
    ofstream myfile1("sample1.txt");
    if (myfile1.is_open())
    {

        cin >> inputText;
        myfile1 << inputText << endl;
        myfile1.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }

    string revInputText = inputText;
    reverse(revInputText.begin(), revInputText.end());
    ofstream myfile2("sample2.txt");
    if (myfile2.is_open())
    {
        myfile2 << revInputText << endl;
        myfile2.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }
    return 0;
}
int main()
{
    if (setup() != 0)
    {
        cout << "Error while setting up data" << endl;
    };
    bool equal = true;
    bool ferr = false;
    unsigned char buf1[1024], buf2[1024];
    string s1 = "sample1.txt";
    string s2 = "sample2.txt";
    ifstream f1(s1, ios::in | ios::binary);
    if (!f1)
    {
        cout << "Cannot open " << s1 << endl;
        return 0;
    }
    ifstream f2("sample2.txt", ios::in | ios::binary);
    if (!f2)
    {
        cout << "Cannot open " << s2 << endl;
        f1.close();
        if (!f1.good())
            cout << "Error closing " << s1 << endl;
        return 0;
    }
    cout << "Comparing files...\n";
    do
    {
        f1.read((char *)buf1, sizeof buf1);
        f2.read((char *)buf2, sizeof buf2);

        if (!f1.eof() && !f1.good())
        {
            cout << "Error reading " << s1 << endl;
            ferr = true;
            break;
        }
        if (!f2.eof() && !f2.good())
        {
            cout << "Error reading " << s2 << endl;
            ferr = true;
            break;
        }

        // Compare contents of buffers.
        for (int i = 0; i < f1.gcount(); ++i)
            if (buf1[i] != buf2[i])
            {
                cout << "Files differ.\n";
                equal = false;
                break;
            }
    } while (!f1.eof() && !f2.eof() && equal);
    if (!ferr && equal)
        cout << "Files are the same.\n";
    // Clear eofbit, and possibly error bits.
    f1.clear();
    f2.clear();
    f1.close();
    f2.close();
    if (!f1.good() || !f2.good())
    {
        cout << "Error closing files.\n";
        return 0;
    }
    return 0;
}
