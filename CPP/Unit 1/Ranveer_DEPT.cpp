#include <iostream>
using namespace std;

struct DEPT{
  int id, yox, salary;
  string name;
};

int main(){
    int n, bonus;
    cin >> n;
    struct DEPT arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].id >> arr[i].yox >> arr[i].salary;
        
    }
    
    for(int i = 0; i < n; i++){
        cout << "Employee Name : " << arr[i].name << endl;
        cout << "Employee Id : " << arr[i].id << endl;
        cout << "years of experience : " << arr[i].yox << endl;
        if (arr[i].yox >= 10){
            bonus = arr[i].salary + (arr[i].salary * 0.10);
            cout << "salary : " << bonus << endl;
        } else if (arr[i].yox >= 5 && arr[i].yox <= 9){
            bonus = arr[i].salary + (arr[i].salary * 0.05);
            cout << "salary : " << bonus << endl;
        } else { 
            bonus = arr[i].salary * 0.02;
            cout << "salary : " << bonus << endl;
        }
        
        cout << endl;
    }   
}
