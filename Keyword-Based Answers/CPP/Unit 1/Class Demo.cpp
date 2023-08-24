#include <iostream>
using namespace std;
class Demo{
    private:
    static int X;
    static int Y;
    public:
    static void get()
    {
        cout << "Value of X: "<< X << endl;
        cout << "Value of Y: " << Y<<endl;
    }
    static void fun(){
        cout << "Value of X: "<<X<<endl;
        cout << "Value of Y: " << Y<<endl;
    }
    
    static void setX(int newValue)
    {
        X = newValue;
    }
    
    static void setY(int newValue)
    {
        Y = newValue;
    }
};

int Demo::X = 10;
int Demo::Y =20;
int main ()
{
    Demo obj;
    Demo::fun();
    
    int newX, newY;
    cin>> newX >> newY;
    Demo::setX(newX);
    Demo::setY(newY);
    Demo :: get();
    return 0;
}