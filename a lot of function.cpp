#include <iostream>
using namespace std;
int main(){
	int no1,no2,total;
	double avg;
	
	cout<<"Enter number 1: ";
	cin<<no1;
	cout<<"Enter number 2: ";
	cin<<no2;
	
	total=findTotal(no1,no2);
	avg=findAvg(total);
	output(total,avg);
	
	return 0;
}
int findTotal(int x,int y);{
	return x+y;	
}
double findAvg(int total){
	return total/2.0;
}
void output(int total,double avg);{
	cout<<"Total: "<<total<<"\nAvarage: "<<avg<<endl;
}
