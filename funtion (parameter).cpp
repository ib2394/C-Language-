#include <iostream>
using namespace std;

void calTotal(double,double);//paramter(wajib)//
int main(){
	
	double no1,no2;
	
	cout<<"Enter number 1: ";
	cin>>no1;
	cout<<"Enter number 2: ";
	cin>>no2;
	calTotal(no1,no2);//sent & hantar//value to calTotal line no 17

	return 0;
}
void calTotal(double no1,double no2){//same dgn yg kat atas//receive
	cout<<"Total is: "<<no1+no2<<endl;
}
///////// use void when there is no return value //////////


