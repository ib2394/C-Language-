#include <iostream>
using namespace std;
int main(){
	int num, count=0, sum=0, div=0;
	
	while (count<5){
		cout<<"Enter number: ";
		cin>>num;
	
		if(num%5==0){
			sum=sum+num;
			div++;
		}
		count++;
	}
	cout<<"\nSum of number that can divide by 5 is: "<<sum<<endl;
	cout<<"Quantity number that can divisible by 5: "<<div<<endl;

	return 0;
}

