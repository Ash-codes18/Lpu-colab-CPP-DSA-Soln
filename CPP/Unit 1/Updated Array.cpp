#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

int main()
{
    int size,pos;
    int arr[MAX_SIZE];
    cin >> size;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cout << "Original array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cin >> pos;
    if(pos < 1 || pos > size)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {
        for(int i = pos-1; i < size-1; ++i) 
        {
            arr[i] = arr[i+1];
        }
        size--;
        
        cout << "Updated array: ";
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
