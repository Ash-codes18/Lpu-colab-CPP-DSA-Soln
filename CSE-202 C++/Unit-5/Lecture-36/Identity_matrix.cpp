#include <iostream>
using namespace std;

void readMatrix(){};

int main(){

    int row,col;
    cin>>row>>col;
    int arr[row][col];

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++) {
            cin>>arr[i][j];
        }
    }

    bool isid=1;

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++) {
            if(i==j && arr[i][j]!=1){
                isid=0;
            }

            else if(i!=j && arr[i][j]==1){
                isid=0;
            }

        }
    }


    if(isid){
        cout<<"Identity matrix";
    }
    else{
        cout<<"Not an identity matrix";
    }

    return 0;
}