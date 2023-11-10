#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    string s[n];
    if(n==-1){
        cout<<"try catch throw";
    }
    int count=1;

    vector<int> id; 

    for(int i=0;i<n;i++){
        cin>>arr[i];
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        bool flag=1;
        if(i>=30){
            cout<<"Exception caught. Error: Student database is full.";
            break;
        }

        else{
            
                for (int j = 0; j < id.size(); j++)
                {
                    if(arr[i]==id[j] && i!=j){
                        flag=0;
                        cout<<"Exception caught. Error: Student ID already exists.";
                        break;
                    }
                }
                
                if(!flag){
                    break;
                }
                id.push_back(arr[i]);
            cout<<"Student with ID "<<arr[i]<<" added to the database."<<endl;

        }
    }

    return 0;
}
