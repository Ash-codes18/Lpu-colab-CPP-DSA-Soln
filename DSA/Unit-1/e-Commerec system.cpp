#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int size;
    vector<int>productIDs;
    cin>> size;
    for (int i =0; i<size; i++)
    {
        int productID;
        cin >> productID;
        productIDs.push_back(productID);
    }
    
    vector <int> updatedProductIDs;
    for (int i = 0; i<size; i++)
    {
        if(productIDs[i] !=0)
        {
            updatedProductIDs.push_back(productIDs[i]);
        }
    }
    cout<<"Removing out-of-stock products"<<endl;
    
    cout<<"Updated array of product IDs:";
    for (int i = 0; i<updatedProductIDs.size(); i++)
    {
        cout<< " "<< updatedProductIDs[i];
    }
    cout <<endl;
    return 0;
}