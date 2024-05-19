#include <iostream>
using namespace std;
int main(){
	double num, positive, negative,i;
	
	for(i=0;i<10;i++){
		cout<<"Enter number: ";
		cin>>num;
		
		if(num>0){
			positive++;
		}
		if(num<0){
			negative++;
		}
	}
	cout<<"\nPositive number: "<<positive<<endl;
	cout<<"Negative number: "<<negative<<endl;

	return 0;
}

