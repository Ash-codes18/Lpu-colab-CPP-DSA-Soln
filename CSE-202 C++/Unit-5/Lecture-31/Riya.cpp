    #include <iostream>
    using namespace std;

    int main(){

        int n;
        cin>>n;
 
        int *arr=new int[n];
        int *ans=new int[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ans[0]=arr[1];
        ans[n-1]=arr[n-2];

        for(int i=1;i<n-1;i++){
            ans[i]=arr[i-1]+arr[i+1];
        }

        cout<<"Modified array: ";
        for(int i=0;i<n;i++) {
            cout<<ans[i]<<" ";
        }

        delete[] arr;
        delete[] ans;


        return 0;
    }