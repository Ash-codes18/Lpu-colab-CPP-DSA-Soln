#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream new_file;

    string filename = "quotes.txt";
    new_file.open(filename, ios::out);

    if (new_file.is_open())
    {
        string quote;
        getline(cin, quote);
        while (quote != ".")
        {

            new_file << quote << endl;
            getline(cin, quote);
        }
        new_file.close();
    }

    new_file.open(filename, ios::in);

    if (new_file.is_open())
    {
        string sa;
        while (getline(new_file, sa))
        {
            cout << sa << endl;
        }
        new_file.close();
    }
}
