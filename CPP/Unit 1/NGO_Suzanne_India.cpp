#include<iostream>
using namespace std;

int main(){
  int x, y, tot;
  cin >> y;
  cin >> tot;

  x = (tot - (5*y))/13;

  cout << "Number of children tickets sold : " << x << endl;
  cout << "Number of adult tickets sold : " << x+y << endl;
  cout << "Number of senior tickets sold : " << 2*x << endl;

}
