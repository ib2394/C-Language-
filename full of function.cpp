#include <iostream>
#include <conio.h>
#include <unistd.h>
using namespace std;
int findTotal(int x,int y);
double findAvg(int total);
void output(int total,double avg);
void greeting(){
	cout<<"WELCOME TO MY PROGRAM ^-^"<<endl<<endl;
	cout<<"NICE TO MEET YOU :]"<<endl<<endl;
}
int main(){
	int no1,no2,total;
	double avg;
	char proceed='Y';///////// ingat //////////
	do{//------------ingat-------------------//
		greeting();
		pointA://--------------(double dote)----------------//
		cout<<"Enter number 1: ";
		cin>>no1;
		if(no1<0){//======================================
			cout<<"Number must be positive\n\n";
			getch();//=======press enter/anything to continue
			system("cls");//========untuk clear kan screan//online compiler guna "clear"=======
			goto pointA;}//--------------ulang balik dari pointA---------
			
		pointB:
			cout<<"Enter number 2: ";
			cin>>no2;
			if (no2<0){
				cout<<"Number must be positive\n\n";
				getch();
				goto pointB;}
				
		total=findTotal(no1,no2);
		avg=findAvg(total);
		output(total,avg);
		
		cout<<"\nPress Y to continue: ";//////// ingat ////////
		cin>>proceed;
		sleep(2);
		system("cls");////////untuk clear kan screen//////////
			
	}while(toupper(proceed)=='Y');
		cout<<"End of Program :) Byeee"<<endl;

	return 0;
}
int findTotal(int x,int y){
	return x+y;
}
double findAvg(int total){
	return total/2.0;
}
void output(int total,double avg){
	cout<<"Total: "<<total<<"\nAvarage: "<<avg<<endl;
}







