#include <iostream>

using namespace std;

int main() {
    int x;
    cin >>x;

    int area[x];

    for (int i = 0; i < x; ++i) {
        int width, height;
        cin >> width >> height;
        areas[i] = width * height;
    }

    cout << "Total number of rectangles: " << x << endl;
    for (int i = 0; i < x; ++i) {
        cout << "Area of rectangle " << i + 1 << ": " 
          << area
       [i] << endl;
    }

    return 0;
}

//Sushant 
