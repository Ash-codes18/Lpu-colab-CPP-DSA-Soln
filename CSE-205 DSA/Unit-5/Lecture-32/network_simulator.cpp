#include <iostream>
using namespace std;

// to heapify a subtree with root at given index
void MaxHeapify(int arr[], int i, int N)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;

    if (l < N && arr[l] > arr[i])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        MaxHeapify(arr, largest, N);
    }
}

// This function basically builds max heap
void convertMaxHeap(int arr[], int N)
{
    // Start from bottommost and rightmost internal node and heapify all internal nodes in bottom up way
    for (int i = (N - 2) / 2; i >= 0; --i)
        MaxHeapify(arr, i, N);
}


void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout<<endl;
}

int main()
{
    int arrayCount;
    cin>>arrayCount;
    int arr[arrayCount];
    for (int i=0;i<arrayCount;i++){
        cin>>arr[i];
    }

    convertMaxHeap(arr, arrayCount);

    printArray(arr, arrayCount);
    cout<<"The largest element is "<<arr[0]<<endl;

    return 0;
}