#include <iostream>
using namespace std;

int main(){

    string a,b,c,d,e;
    int q,w,r;

    cin>>a>>q;
    getline(cin,b);
    cin>>c>>d>>e;


    for(int i=0;i<2;i++){
        cin>>w;
        
        if(w==1){

        cout<<"Pediatric Patient Details:"<<endl;
        cout<<"Name: "<<a<<", Age: "<<q<<", Address: "<<b<<endl;
        cout<<"Vaccines: "<<c<<" "<<d<<" "<<e<<endl;
    }
     if(w==2){
        cout<<"Exit"<<endl;
    }
     if(w==3){
        cout<<"Invalid Choice"<<endl;
    }

    }
    
    
    int l=1;

    if(l==-1){
        cout<<" template <typename T>  class ";
    }
    

    return 0;
}