#include <iostream>
#include <iomanip>
using namespace std;
  
class Room{
    int breadth, height, length;
    static int count;
    
public:
    Room(int l, int b, int h){
        length = l;
        breadth = b;
        height = h;
    }
    
    Room(const Room& r){
        length = r.length;
        height = r.height;
        breadth = r.breadth;
        count++;
    }
    
    void updateData(int l, int b, int h){
        if (l != -1){
            length = l;
        }
        if (b != -1){
            breadth = b;
        }
        if (h != -1){
            height = h;
        }
    }
    
    
    int calculateArea(){
        return 2 * (length + breadth) * height;
    }
};

int Room::count = 0;

int main(){
    int length, breadth, height;
    cin >> length >> breadth >> height;
    
    Room r1(length, breadth, height);
    Room r2 = r1; // Use the copy constructor to create r2
    
    r2.updateData(-1, breadth - 10, -1);
    
    cout << "r1 area: " << r1.calculateArea() << endl;
    cout << "r2 area: " << r2.calculateArea() << endl;
    
    return 0;
}