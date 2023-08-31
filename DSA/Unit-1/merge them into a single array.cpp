#include<iostream>
#include<vector>

using namespace std;
int main()
{   int numArrays;
    cin >> numArrays;
    
    int mergedArray[10000];
    int mergedIndex = 0;
    
    for (int i = 0; i < numArrays; ++i)
    {
        int arraySize;
        cin >> arraySize;
        
            for (int j = 0; j<arraySize; ++j)
            {
                int element;
                cin >> element;
                mergedArray[mergedIndex] = element;
                mergedIndex++;
            }
    }
    
    cout <<"Merged array: ";
    for(int k = 0; k < mergedIndex; ++k)
    {
        cout<<mergedArray[k]<< " ";
    }
    cout << endl;
 
    return 0;
}
