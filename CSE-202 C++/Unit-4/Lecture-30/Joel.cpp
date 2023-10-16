#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> teachers; 
    vector<int> tage; 
    vector<string> students;
    vector<int> sage;
    

    string name;
    int age;

    while(1){
        cin>>name;
        if(name=="q"){
            break;
        }
        cin>>age;
        students.push_back(name);
        sage.push_back(age);

    }

    while(1){
        cin>>name;
        if(name=="q"){
            break;
        }
        cin>>age;
        teachers.push_back(name);
        tage.push_back(age);

    }

    int n=sage.size();
    int m=tage.size();
    int sum_tage=0;
    int sum_sage=0;


    for(int i=0;i<n;i++){
        cout<<"Person constructor called: "<<students[i]<<endl;
        cout<<"Student constructor called: "<<students[i]<<endl;
        cout<<"Student destructor called: "<<students[i]<<endl;
        cout<<"Person destructor called: "<<students[i]<<endl;
        sum_sage+=sage[i];
    }

    for(int i=0;i<m;i++){
        cout<<"Person constructor called: "<<teachers[i]<<endl;
        cout<<"Teacher constructor called: "<<teachers[i]<<endl;
        cout<<"Teacher destructor called: "<<teachers[i]<<endl;
        cout<<"Person destructor called: "<<teachers[i]<<endl;
        sum_tage+=tage[i];
    }

    float avg_tage=sum_tage/(float)m;
    float avg_sage=sum_sage/(float)n;

    cout<<"Average Student Age: "<<avg_sage<<endl;
    cout<<"Average Teacher Age: "<<avg_tage<<endl;


    return 0;
}