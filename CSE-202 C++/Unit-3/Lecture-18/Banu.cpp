#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int setup()
{

    string inputText;
    ofstream myfile("sample.txt");
    if (myfile.is_open())
    {

        cin >> inputText;
        int count;
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            myfile << inputText << endl;
        }

        myfile.close();
    }
    else
        cout << "Unable to open file";
    return 0;
}

int main()
{
    if (setup() != 0)
    {
        cout << "Unable to setup data";
        return 0;
    };
    string line;

    ifstream myfile("sample.txt");
    if (myfile.is_open())
    {

        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        if (myfile.eof())
        {
            cout << "End of file reached" << endl;
        }
        myfile.close();
    }

    else
        cout << "Unable to open file";

    return 0;
}
