#include <iostream>
using namespace std;
int main()
{
    int x,y,adult,child,senior;
    cin >>x>>y;
    child=(y-(5*x))/13;
    adult=child+x;
    senior=2*child;
    
    cout << "Number of children tickets sold: " << child << endl;
    cout << "Number of adult tickets sold: " << adult<< endl;
    cout << "Number of senior tickets sold: " << senior<<endl;
    
    
    return 0;
}

//Sushant.
