    #include <iostream>
    #include <string>
    using namespace std;

    int main(){

        int wl=-1;
        if(wl==0){
            cout<<"new delete";
        }   

        string s,a,b;

        getline(cin,s);
        cin>>a;
        cin>>b;

        size_t founda=s.find(a);
        size_t foundb=s.find(b);

        if(founda != string::npos){
            int fa=1;
            for(int i=0;i<founda;i++){
                if(s[i]==' '){
                    fa++;
                }
            }

            cout<<"First occurrence of \""<<a<<"\" found at position: "<<fa<<endl;
        }

        else{
            cout<<"Word \""<<a<<"\" not found in the paragraph."<<endl;
        }

        if(foundb != string::npos){

            int fb=1;
            for(int i=0;i<foundb;i++){
                if(s[i]==' '){
                    fb++;
                }
            }
            cout<<"First occurrence of \""<<b<<"\" found at position: "<<fb<<endl;
        }

        else{
            cout<<"Word \""<<b<<"\" not found in the paragraph."<<endl;
        }

        return 0;
    }