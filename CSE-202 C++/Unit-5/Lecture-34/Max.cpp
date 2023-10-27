#include <iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    if(a==1){
        cout<<"The taste of the fruit is: Sweet";
    }
    else if(a==2){
        cout<<"The taste of the fruit is: Creamy";
    }
    else if(a==3){
        cout<<"The taste of the fruit is: Tangy";
    }
    else if(a==4){
        cout<<"The taste of the fruit is: Juicy";
    }
    else if(a==5){
        cout<<"The taste of the fruit is: Sweet and Sour";
    }

    else{
        cout<<"Invalid choice, defaulting to generic fruit."<<endl<<"The taste of the fruit is: Generic fruit taste";
    }


    return 0;
}