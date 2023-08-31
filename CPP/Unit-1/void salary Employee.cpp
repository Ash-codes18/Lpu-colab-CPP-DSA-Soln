#include <iostream>

class Employee {
 private:
 static int count;
  int salary;
            
 public:
 static int getCount() {
     return count;
}
                
void setSalary(int s) {
     salary = s;
   count++;
  }
  int getSalary() {
   return salary;
  }
};

int Employee::count = 0;

int main() {
int n;
std::cin >> n;
Employee employees[n];
 for (int i = 0; i < n; i++) {
int s;
std::cin >> s;
employees[i].setSalary(s);
}
std::cout << "Total number of employees: " << Employee::getCount() << std::endl;
for (int i = 0; i < n; i++) {
std::cout << "Salary for employee " << i + 1 << ": " << employees[i].getSalary() << std::endl;
}
return 0;
}