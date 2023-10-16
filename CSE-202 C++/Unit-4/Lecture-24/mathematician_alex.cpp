#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    int l,b;
    cin>>n;

    int perimeter=INT_MAX;

    for(int i=0;i<n;i++){
        cin>>l>>b;
        cout<<"Perimeter of rectangle "<<i+1<<": "<<2*(l+b)<<endl;
        if(perimeter>2*(l+b)){
            perimeter=2*(l+b);
        }
    }

    cout<<"Perimeter of the smallest rectangle: "<<perimeter;

    return 0;
}