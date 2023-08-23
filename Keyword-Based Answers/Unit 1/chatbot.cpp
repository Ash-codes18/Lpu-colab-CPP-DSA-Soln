#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    
    for(char &c : sentence)
    {
        c = toupper(c);
    }
    
    cout << sentence << endl;
    return 0;
}