// You are using GCC
#include <iostream>
#include <string>
using namespace std;

#define HASH_TABLE_SIZE 1000

unsigned int customHash(string key) {
    //Type your code here
    unsigned int hashValue=0;
    for(char ch:key){
        hashValue=(hashValue*37)+static_cast<unsigned int> (ch);
    }
    return hashValue % HASH_TABLE_SIZE;
}

int main() {
    string key;
    while (true) {
        cin >> key;

        if (key == "exit") {
            break;
        }

        unsigned int hashValue = customHash(key);
        cout << hashValue << endl;
    }

    return 0;
}