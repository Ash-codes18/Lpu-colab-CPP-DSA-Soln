#include <iostream>
using namespace std;

int fun1(int num1,int num2){
  return num1 + num2;
}

int fun1(int num1,int num2,int num3){
  return num1 * num2 * num3;
}

int main(){
  int n, i, arr[n];
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> arr[i];
  }
  int val;
  if(n == 2){
    val = fun1(arr[0], arr[1]);
  } else if (n == 3) {
    val = fun1(arr[0], arr[1], arr[2]);
  } else {
    cout << "Invalid Input";
    return 0;
  }

  cout << val;
}
