// You are using GCC
#include <iostream>
using namespace std;

class Area{
  public:
    void get();
    inline void haha();
    void squareArea(int n){
        cout << "Area of the square: " << n*n;
    }
    
    void rectangleArea(int x, int y){
        cout << "Area of the rectangle: " << x*y;
    }
    
    void circleArea(float r){
    float radius = r*r * 3.14;
    printf("Area of the circle: %.2f", radius);
    }
    
    void parallelogramArea(float x, float y){
        float area = x*y;
        printf("Area of the parallelogram: %.2f", area);
    }
};

int main(){
    Area a;
    int sq;
    cin >> sq;
    a.squareArea(sq);
    int rx, ry;
    cin >>  rx >> ry;
    a.rectangleArea(rx, ry);
    float cf;
    cin >> cf;
    a.circleArea(cf);
    
    float prx, pry;
    cin >> prx >> pry;
    a.parallelogramArea(prx, pry);
    
}


