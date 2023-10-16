#include <iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    string item_name;
    int item_number,price,discount_pr;


    if(n==-1){
        cout<<" class DiscountedItem : public ItemDetails, public DiscountDetails ";
    }

    int total_price=0;
    float total_discount=0.0;

    cout<<"Item-wise bill:"<<endl;

    for(int i=0;i<n;i++){

        cin>>item_name;
        cin>>item_number;
        cin>>price;
        cin>>discount_pr;
        float dmin= (price/100.0)*discount_pr;

        cout<<"Item name: "<<item_name<<endl;
        cout<<"Item number: "<<item_number<<endl;
        cout<<"Item price: "<<price<<endl;
        cout<<"Discount percent: "<<discount_pr<<"%"<<endl;
        cout<<"Discounted price: "<<price-dmin<<endl;

        total_price+=price;
        total_discount+=dmin;

    }
    
    cout<<endl<<endl;
    cout<<"Total price: "<<total_price<<endl;
    cout<<"Total discount: "<<total_discount;
    

    return 0;
}