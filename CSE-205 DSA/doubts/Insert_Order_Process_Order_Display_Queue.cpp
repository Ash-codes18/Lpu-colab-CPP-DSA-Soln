#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> a;
    int fn;
    int x;

    while(a.size()<=5){
        cin>>fn;

        if(fn==1){
            if(a.size()==5){
                cout<<"Queue is full."<<endl;
                break;
            }
            else{
                cin>>x;
                a.push_back(x);
                cout<<"Order ID "<<x<<" is inserted in the queue."<<endl;
            }
        }

       else if(fn==2){
            if(a.size()==0){
                cout<<"Queue is empty."<<endl;
            }
            else{
                cout<<"Processed Order ID: "<<a[0]<<endl;
                a.erase(a.begin());
            }
        }

        else if(fn==3){
           if(a.size()==0){
            cout<<"Queue is empty."<<endl;
           }
           else{
             cout<<"Order IDs in the queue are: ";
            for(int j:a){
                cout<<j<<" ";
            }
            cout<<endl;
            break;
           }
        }

        else{
            cout<<"Invalid option.";
            break;
        }

    }

    return 0;
}