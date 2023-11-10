#include <iostream>
#include <regex>
using namespace std;

int main() {
    string email;
    cin >> email;
    int a=0;
    if(a==-1){
        cout<<"try catch throw";
    }

    // Regular expression pattern to validate email format
    regex pattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");

    if (regex_match(email, pattern)) {
        cout << "Email Id is Valid.";
    } else {
        cout << "Exception Caught...\nInvalid Email Id!!!";
    }

    return 0;
}
