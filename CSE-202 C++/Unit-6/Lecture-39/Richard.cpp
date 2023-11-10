#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateDistance2D(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    return sqrt(dx * dx + dy * dy);
}

double calculateDistance3D(int x1, int y1, int z1, int x2, int y2, int z2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int dz = z2 - z1;

    return sqrt(dx * dx + dy * dy + dz * dz);
}

int main() {
    int choice;
    cin >> choice;
    if(choice==-1){
        cout<<" template <typename T> ";
    }

    if (choice == 2) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        double distance = calculateDistance2D(x1, y1, x2, y2);

        cout << fixed << setprecision(2);
        cout << "Distance between the points in two-dimensional space: " << distance << endl;
    } else if (choice == 3) {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        double distance = calculateDistance3D(x1, y1, z1, x2, y2, z2);

        cout << fixed << setprecision(2);
        cout << "Distance between the points in three-dimensional space: " << distance << endl;
    } else {
        cout << "Invalid choice. Please enter 2 or 3." << endl;
    }

    return 0;
}
