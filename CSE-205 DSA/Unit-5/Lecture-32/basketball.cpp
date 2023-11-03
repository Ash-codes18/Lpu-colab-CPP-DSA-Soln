#include <iostream>
using namespace std;
int min_heap(int a[],int n) 
{
    for(int i=0;i<(n-1)/2;i++)
    {
        if((a[i]>a[(i*2)+1]) || a[i]>a[(i*2)+2])
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    int keys[n];
    for (int i = 0; i < n; i++) {
        cin>>keys[i];
    }
    if(min_heap(keys, n)==1)
    {
        cout<<"The players are arranged in min heap order";
    }
    else 
    {
        cout<<"The players are not arranged in min heap order";
    }
}