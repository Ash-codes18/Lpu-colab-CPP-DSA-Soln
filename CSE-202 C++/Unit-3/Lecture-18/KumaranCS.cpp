#include <iostream>
#include <fstream>
using std::ofstream;
using namespace std;

int main()
{
    fstream file;
    file.open("sample.dat", ios::out);
    ofstream outdata;
    int i, j, n, a;
    cin >> n;
    int number[n];
    for (i = 0; i < n; ++i)
    {
        cin >> number[i];
    }
    outdata.open("sample.dat");
    for (i = 0; i < n; ++i)
    {
        outdata << number[i] << endl;
    }
    outdata.close();
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (number[j] > number[j + 1])
            {
                a = number[j];
                number[j] = number[j + 1];
                number[j + 1] = a;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << number[i] << " ";
    }
    file.close();
    return 0;
}
