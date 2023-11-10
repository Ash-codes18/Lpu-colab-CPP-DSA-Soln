// You are using GCC
#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    cin >> a >> b;
    if(a==-1){
        cout<<" template<class T> ";
    }

    double c, d;
    cin >> c >> d;

    cout << "Maximum value: " << maxValue(a, b) << endl;
    cout << "Maximum value: " << maxValue(c, d) << endl;

    return 0;
}
