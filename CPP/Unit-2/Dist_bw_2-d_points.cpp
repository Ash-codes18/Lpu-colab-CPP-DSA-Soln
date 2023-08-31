#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class whitelist
{
int x,y;
public:
         void setX (int x,int y)
   {
       this->x = x;
       this->y = y;
   }
       int distanceTo;
       int Point;

};

int main(){

    float a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    
    float x=(c-a)*(c-a);
    float y=(d-b)*(d-b);

    cout<<fixed<<setprecision(2);
    cout<<sqrt(x+y);

    return 0;
}