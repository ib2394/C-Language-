#include <iostream>
using namespace std;
double calTotal();
int main(){
	double total;
	
	total=calTotal();
	cout<<"Total is: "<<total<<endl;

	return 0;
}
double calTotal(){
	double no1,no2;
	cout<<"Enter number 1: ";
	cin>>no1;
	cout<<"Enter number 2: ";
	cin>>no2;
	
	return no1+no2;//kembalikan hasil tambah/final value will be return
}
