#include<iostream>
using namespace std;

enum Month{
 JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
};

class Year{
 private:
 Month month;
 
 public:
 Year(int m){
 if (m>=1 && m<=12){
 month=static_cast<Month>(m-1);
 }
 else{
 std::cout<<"Invalid month input\n";
 exit(1);
 }
 }
 
 Month getMonth(){
 return month;
 }
};
int main(){
 int inputMonth;
 std::cin>>inputMonth;
 Year year(inputMonth);
 
 std::cout<<"Month: ";
 switch(year.getMonth()){
 case Month::JANUARY:
 std::cout<<"JANUARY";
 break;
 case Month::FEBRUARY:
 std::cout<<"FEBRUARY";
 break;
 case Month::MARCH:
 std::cout<<"MARCH";
 break;
 case Month::APRIL:
 std::cout<<"APRIL";
 break;
 case Month::MAY:
 std::cout<<"MAY";
 break;
 case Month::JUNE:
 std::cout<<"JUNE";
 break;
 case Month::JULY:
 std::cout<<"JULY";
 break;
 case Month::AUGUST:
 std::cout<<"AUGUST";
 break;
 case Month::SEPTEMBER:
 std::cout<<"SEPTEMBER";
 break;
 case Month::OCTOBER:
 std::cout<<"OCTOBER";
 break;
 case Month::NOVEMBER:
 std::cout<<"NOVEMBER";
 break;
 case Month::DECEMBER:
 std::cout<<"DECEMBER";
 break;
 
 }
 std::cout<<std::endl;
 return 0;
}