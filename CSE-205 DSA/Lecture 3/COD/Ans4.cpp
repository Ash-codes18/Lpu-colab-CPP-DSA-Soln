// You are using GCC
#include <iostream>

using namespace std;

int sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j+1<n;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    
  int n;
  cin>>n;
  int arr[n];
  
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  sort(arr,n);
  cout<<"Second Smallest Element: "<<arr[n-2];
    
    return 0;
}