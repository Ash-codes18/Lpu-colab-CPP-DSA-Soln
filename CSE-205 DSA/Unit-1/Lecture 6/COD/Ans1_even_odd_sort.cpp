// You are using GCC
#include <iostream>
#include <algorithm>
using namespace std;

void dsort_odd(int arr[],int arr1[], int n, int m){
    int count=0;    
    for(int i=0;i<n;i+=2){
        arr1[count]=arr[i];
        count++;
    }
    
    sort(arr1,arr1+m,greater<int>());
   
   int num=0;
   for(int i=0;i<n;i+=2){
       arr[i]=arr1[num];
       num++;
   }
    
}


void asort_even(int arr[],int arr2[], int n,int m){
   
    int count=0;    
    for(int i=1;i<n;i+=2){
        arr2[count]=arr[i];
        count++;
    }
    sort(arr2,arr2+m);
 
   int num=0;
   for(int i=1;i<n;i+=2){
       arr[i]=arr2[num];
       num++;
   }
   
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int es=n/2;
    int os=es;
    
    if(n%2!=0){
        os++;
    }
    
    int arr1[es];
    int arr2[os];
    
    asort_even(arr,arr1,n,es);
    dsort_odd(arr,arr2,n,os);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}