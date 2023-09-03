#include <iostream>
using namespace std;

struct Patient{
  int id, gender, age;
};

void print_gender(Patient st[1], int n){
int i, m = 0, f = 0; 
for(i = 0; n > i; i++){
  if(st[i].gender == 1){
    m += 1;
  } else {
    f += 1;
  }
}

printf("%d %d", m, f);

}

void print_age(Patient st[], int n){
int i = 0, count = 0;
  for(i; n > i; i++){
    if(st[i].age > 40){
    count++;
    }
}

printf("\n%d", count);

}

int main(){
  int n, i;
  cin >> n;
  Patient arr[n];

  for(i = 0; i < n; i++){
    cin >> arr[i].id;
    cin >> arr[i].gender;
    cin >> arr[i].age;
  }


  print_gender(arr, n);
  print_age(arr, n);
}
