#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int n;
cin>>n;

	int sum=0;
if(n==-1){
    cout<<"open close";
}

else if(n>20){
	cout<<"Exceeding limit!";
}

else{
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		sum+=a;
	}
float avg=(float)sum/(float)n;

cout<<fixed<<setprecision(1);
cout<<avg;
}


return 0;
}

