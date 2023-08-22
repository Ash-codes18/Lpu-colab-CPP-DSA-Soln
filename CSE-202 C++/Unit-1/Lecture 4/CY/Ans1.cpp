// You are using GCC
#include <iostream>
using namespace std;

struct DEPT{
    
};

int main(){
    
    int n;
    cin>>n;
    
    string arr[n];
    int arr1[n];
    int arr2[n];
    int arr3[n];
    
    int i=0;
    
    while(i<n){
        
        cin>>arr[i]>>arr1[i]>>arr2[i]>>arr3[i];
        
        int sal=arr3[i];
        
        if(arr2[i]<5){
            sal=(sal*0.02)+sal;    
        }
        
        else if(9>=arr2[i] && arr2[i]>=5){
            sal=(sal*0.05)+sal;    
        }
        
       else{
           sal=(sal*0.1)+sal;    
        }
        
        cout<<"Employee Name : "<<arr[i]<<endl;
        cout<<"Employee Id : "<<arr1[i]<<endl;
        cout<<"years of experience : "<<arr2[i]<<endl;
        cout<<"salary : "<<sal<<endl<<endl;
        
        i++;
        
    }
    
    return 0;
}