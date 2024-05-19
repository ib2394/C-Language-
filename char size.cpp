#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	char myName[50];
	char yourName[50]="Ali BIn Abu";
	cout<<"Enter my name: ";
	cin.getline(myName,50);
	
	if(strcmp(myName,yourName)==0)
	{
		cout<<"My Name is: "<<myName<<endl;
		cout<<"Your Name: "<<yourName<<endl;
		cout<<"are the same name."<<endl;
	}
	else{
		cout<<"NOT THE SAME NAME."<<endl;
	}
	
	return 0; 
}
