// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

void calculateExpenses(int be, int te, int fe, int le){
    
    double total=be+te+fe+le;
    cout<<"Total expenses: Rs."<<total<<endl;
    
    double bep=(be/total)*100;
    cout<<"Branding expenses percentage: "<<bep<<endl;
    
    double tep=(te/total)*100;
    cout<<"Travel expenses percentage: "<<tep<<endl;
    
    double fep=(fe/total)*100;
    cout<<"Food expenses percentage: "<<fep<<endl;
    
    double lep=(le/total)*100;
    cout<<"Logistics expenses percentage: "<<lep<<endl;
    
    
    
}

int main(){
    
    int* z;
    
    int be,te,fe,le;
    cin>>be;
    cin>>te;
    cin>>fe;
    cin>>le;
    
    cout<<fixed<<setprecision(2);
    calculateExpenses(be,te,fe,le);
    
    return 0;
}