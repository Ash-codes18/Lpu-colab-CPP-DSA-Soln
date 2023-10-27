    #include <iostream>
    #include <vector>
    using namespace std;


    bool checkprime(int a){

        if(a<2){
            return false;
        }
        for (int i = 2; i * i <= a; ++i) {
            if (a % i == 0) {
                return false;
                }
                }
                return true;

    }


    int main(){

        int wl=-1;
    if(wl==0){
        cout<<"new delete";
    }   

        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> prime;
        vector<int> non_prime;

        for(int i=0;i<n;i++){
            if (checkprime(arr[i])){
                prime.push_back(arr[i]);
            }
            else{
                non_prime.push_back(arr[i]);
            }
        }

        if(prime.empty()){
            cout<<"No prime numbers found.";
        }

        else{
        cout<<"Prime numbers: ";
        for(int i:prime){
            cout<<i<<" ";
        }
        }

        cout<<endl;

        if(non_prime.empty()){
            cout<<"No non-prime numbers found.";
        }

        else{
        cout<<"Non-prime numbers: ";
        for(int i:non_prime){
            cout<<i<<" ";
        }
        }

        return 0;
    }