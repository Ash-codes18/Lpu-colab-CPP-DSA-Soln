// You are using GCC
#include <iostream>
using namespace std;

int find_point(int arr[],int start, int end, int x){
    
if(arr[end]<=x){
    return end;
}

if(arr[start]>x){
    return start;
}

int mid= (start+end)/2;

if(arr[mid]<=x && arr[mid+1]>x){
        return mid;
    }
    
    if(arr[mid]<x){
        return find_point(arr,mid+1,end,x);
    }
    
    return find_point(arr,start,mid-1,x);
}


void finder(int arr[],int x, int k, int n){
    
    int l=find_point(arr,0,n-1,x);
    int r=l+1;
    int count=0;
    
    if(arr[l]==x){
        l--;
    }
    
    while(l>=0 && r<n && count <k){
        if(x-arr[l]<arr[r]-x){
            cout<<arr[l--];
        }
        else{
            cout<<arr[r++];
        }
        count++;
    }
    
    while(count<k && l>=0){
        cout<<arr[l--];
        count++;
    }
    
    while(count<k && r<n){
        cout<<arr[r++];
        count++;
    }
    
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int x,y;
    cin>>x;
    cin>>y;
    
    finder(arr,x,y,n);
    
    return 0;
}