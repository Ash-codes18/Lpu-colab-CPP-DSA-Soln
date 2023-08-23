#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class StringManipulator
{
private:
    string inputString;

public:
    void setString(const string &s);

    int countCharacters();

    int findLength();

    void convertToUppercase();

    void convertToLowercase();

    string getProcessedString();
};

void StringManipulator::setString(const string &s)
{
    inputString = s;
}

int StringManipulator::countCharacters()
{
    int count = 0;
    for (char c : inputString)
    {
        if (isalnum(c) || isspace(c) || ispunct(c))
        {
            count++;
        }
    }
    return count;
}

int StringManipulator::findLength()
{
    return inputString.length();
}

void StringManipulator::convertToUppercase()
{
    for (char &c : inputString)
    {
        c = toupper(c);
    }
}

void StringManipulator::convertToLowercase()
{
    for (char &c : inputString)
    {
        c = tolower(c);
    }
}

string StringManipulator::getProcessedString()
{
    return inputString;
}

int main()
{
    StringManipulator manipulator;
    string input;

    getline(cin, input);
    manipulator.setString(input);

    cout << "Number of characters: " << manipulator.countCharacters() << endl;
    cout << "Length of the string: " << manipulator.findLength() << endl;

    manipulator.convertToUppercase();
    cout << "Uppercase string: " << manipulator.getProcessedString() << endl;

    manipulator.convertToLowercase();
    cout << "Lowercase string: " << manipulator.getProcessedString() << endl;

    return 0;
}