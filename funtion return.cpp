#include <iostream>
using namespace std;

void input();//////the function not return to main
double findTotal();///////return the function
double findAvg(double);//////return the function
void output(double,double);////the function not return to main
//------local variable(declare dlm satu functionand boleh guna dlm tu je)(easy for debugging)
//------global variable(boleh guna mana mana je)
double no1,no2;//----global variable(minimize the use of global variable)
int main(){
	char proceed;
	do{
		double total,avg;
		input();
		total=findTotal();
		avg=findAvg(total);
		output(total,avg);
		
		cout<<"\nPress Y to continue: ";
		cin>>proceed;
	}while(proceed=='y'||proceed=='Y');//(tolower/toupper(proceed)=='Y'/'y')
	cout<<"End of program";

	return 0;
}
void input(){//sama dgn yg dah declare kat atas
	cout<<"Enter number 1: ";
	cin>>no1;
	cout<<"Enter number 2: ";
	cin>>no2;
}
double findTotal(){
	double total=no1+no2;//local variable
	return total;//return no1+no2;
}
double findAvg(double total){
	double avg=total/2.0;
	return avg;
}
void output(double total,double avg){
	cout<<"The total: "<<total<<endl;
	cout<<"The average: "<<avg<<endl;
}
