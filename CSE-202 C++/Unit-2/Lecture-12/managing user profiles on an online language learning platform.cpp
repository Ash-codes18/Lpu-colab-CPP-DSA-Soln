    #include <iostream>
    using namespace std;

    int main(){

        int n;
        string a,b;
        int p;

        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a;
            cin>>b;
            cin>>p;

            cout<<"Profile for user "<<i+1<<":"<<endl;
            cout<<"Username: "<<a<<endl;
            cout<<"Email: "<<b<<endl;
            cout<<"Learning Progress: "<<p<<"%"<<endl;
            if(p<25){
                cout<<"You are just getting started. Keep it up!";
            }
            else if(p>=25 && p<75){
                cout<<"You're making good progress. Keep learning!";
            }
            else{
                cout<<"Congratulations! You're doing great!";
            }

            cout<<endl<<endl;
        }

        return 0;
    }