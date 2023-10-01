#include <iostream>
#include <math>

using namespace std;

int main(){

	int n;
	cin>>n;
	
	if(n==-1){
		cout<<"open close"
	}
	
	else if(n>100){
		cout<<"Exceeding limit!";
	}

else{
	int a;
	int even=0,odd=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0){
			even++;
		}
		else{
			odd++;
		}
	}

	cout<<"Even: "<<even;
	cout<<"Odd: "<<odd;
}
	
	return 0;
}