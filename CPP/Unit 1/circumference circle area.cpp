#include <iostream>
#include <iomanip>
using namespace std;

struct Circle {
        double radius;
};

int main() {
        const double PI = 3.14;
            Circle garden;
            
                cin >> garden.radius;
                
                    double circumference = 2 * PI * garden.radius;
                        double area = PI * garden.radius * garden.radius;
                        
                            cout << fixed << setprecision(2);
                                cout << circumference << endl;
                                    cout << area << endl;
                                    
                                        return 0;
}