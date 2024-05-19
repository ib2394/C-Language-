#include <iostream>
using namespace std;
int main(){
	char proceed; //sentinel value(LCV)
	do{
		//add code here
		//add code here
		cout<<"Enter Y to continue: ";
		cin>>proceed;
	}while(toupper(proceed)=='Y');
	//(tolower(proceed)=='y');
	//(proceed='y'||proceed='Y');
	
	//if you use integer as LCV/sentinel value
	int option; //sentinel value (LCV)
	do{
		//add code here
		//add code here
		cout<<"Press 1 to continue: ";
		cin>>option;
	}while(option==1);
	
	return 0;
}
