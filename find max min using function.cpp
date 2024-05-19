#include <iostream>
using namespace std;

void input();
double findMax();
double findMin();
void output(double max, double min);
double a,b,c;

int main(){
	char proceed;
	do{
		double min,max;
		input();
		max=findMax();
		min=findMin();
		output(max,min);
		
		cout<<"\nPress Y to continue: ";
		cin>>proceed;
	}while(toupper(proceed)=='Y');
	cout<<"End of program!"<<endl;

	return 0;
}
void input(){
	cout<<"Enter number 1: ";
	cin>>a;
	cout<<"Enter number 2: ";
	cin>>b;
	cout<<"Enter number 3: ";
	cin>>c;
}
double findMax(){
	if(a>(b&&c)){
		cout<<"Maximum number is: "<<a<<endl;
		
	}
	else if(b>(a&&c)){
		cout<<"Maximum number is: "<<b<<endl;
		
	}
	else if(c>(a&&b)){
		cout<<"Maximum number is: "<<c<<endl;
		
	}
}
double findMin(){
	if(a>b&&c){
		cout<<"Maximum number is: "<<a<<endl;
	
	}
	else if(b>a&&c){
		cout<<"Maximum number is: "<<b<<endl;
		
	}
	else if(c>a&&b){
		cout<<"Maximum number is: "<<c<<endl;
		
	}
	
}

void output(double max, double min){
	cout<<"The maximum is: "<<max<<endl;
	cout<<"The minimum is: "<<min<<endl;
}







