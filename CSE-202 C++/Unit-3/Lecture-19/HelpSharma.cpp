#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int setup()
{
    ofstream myfile1("lines.txt");
    if (myfile1.is_open())
    {
        string line;
        getline(cin, line);
        myfile1 << line << endl;

        myfile1.close();
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }
    return 0;
}
// Class definitions
class DigitCounter
{
public:
    int n_digits = 0;
    int n_uppercase = 0;
    int n_lowercase = 0;

    DigitCounter() {}

    void count_file(string filename)
    {
        // Read file line by line
        string line;
        ifstream mfile(filename);
        while (std::getline(mfile, line))
        {
            for (auto &x : line)
            {
                // Search digits
                if (isdigit(x))
                    n_digits += 1;
                if (isupper(x))
                    n_uppercase += 1;
                if (islower(x))
                    n_lowercase += 1;
            }
        }
    }

private:
};
// empty footer

int main()
{
    string filename = "lines.txt";
    if (setup() != 0)
    {
        cout << "Error while setting up data" << endl;
        return 0;
    }
    DigitCounter counter;
    counter.count_file(filename);

    std::cout << "Uppercase characters: " << counter.n_uppercase << endl;
    std::cout << "Lowercase characters: " << counter.n_lowercase << endl;
    std::cout << "Digits: " << counter.n_digits;
}