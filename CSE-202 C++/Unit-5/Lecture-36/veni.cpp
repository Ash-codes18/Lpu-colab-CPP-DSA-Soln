#include <iostream>
using namespace std;

class PermutationsAndCombinations{
    int *PermutationsAndCombinations = new int (2); 
};

int getFactorial(int n){
    int mul=1;
    while(n>1){
        mul *= n;
        n--;
    }
    return mul;
}

int nPr(int n, int r){
    int a=getFactorial(n);
    int b=getFactorial(n-r);

    return a/b;

}


int nCr(int n, int r){
    int a=getFactorial(n);
    int b=getFactorial(n-r);
    int c=getFactorial(r);
    int d=b*c;

    return a/d;

}

int main(){

    int n,r;
    cin>>n>>r;

    if(r>n){
        cout<<"Invalid input";
    }

    else{
        cout<<"Permutations (nPr): "<<nPr(n,r)<<endl;
        cout<<"Combinations (nCr): "<<nCr(n,r)<<endl;
    }


    return 0;
}