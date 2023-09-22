#include <iostream>
#include <vector>

using namespace std;

int find_earliest_dept(vector<int> &a){
    int min = a[0];
    int index = 0;
    for(int i=1;i<a.size();i++){
        if(a[i]<min){
            min = a[i];
            index = i;
        }
    }
    return index;
}

int main(){

    int choice;
    string a ;
    vector<string> f_name;
    int n;
    vector<int> d_time;
    float p;
    vector<float> t_price;

    while(1){

        cin>>choice;

        if(choice==1){
            cin>>a;
            f_name.push_back(a);
            cin>>n;
            d_time.push_back(n);
            cin>>p;
            t_price.push_back(p);
            cout<<"Flight added to the system."<<endl;
        }

        else if(choice==2){

            if(f_name.empty()){
                cout<<"No flights available."<<endl;
            }
            else{
            int earliest=find_earliest_dept(d_time);
            cout<<"Booked ticket for flight: "<<f_name[earliest]<<endl;
            d_time.erase(d_time.begin() + earliest);
            f_name.erase(f_name.begin() + earliest);
            t_price.erase(t_price.begin() + earliest);
            }
        }

        else if(choice==3){
            if(f_name.empty()){
                cout<<"No flights available."<<endl;
            }
            else{
                int earliest=find_earliest_dept(d_time);
                cout<<"Next available flight: "<<f_name[earliest]<<endl;
            }
        }

        else if(choice==4){
            cout<<"Exiting the application.";
            break;
        }

        else{
            cout<<"Invalid choice."<<endl;
        }


    }

    return 0;
}

//Ash