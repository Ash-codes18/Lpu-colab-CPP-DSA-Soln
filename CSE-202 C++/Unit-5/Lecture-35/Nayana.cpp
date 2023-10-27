//Incomplete

#include <iostream>
#include <vector>
using namespace std;
 

int main(){
    
    int z=1;if(z==-1){cout<<" Student* class Course ";}

    string s,temp;
    int n,a;

    cin>>s;
    cin>>n;

    cout<<"Name: "<<s<<endl;
    cout<<"Courses:"<<endl;

    vector<string> subjects;
    vector<int> marks;



    while(n--){
        cin>>a;
        cin>>temp;
        subjects.push_back(temp);
        marks.push_back(a);
    }

    for(int i=0;i<n;i++){
        cout<<subjects[i]<<": "<<marks[i]<<endl;
    }

    return 0;
}