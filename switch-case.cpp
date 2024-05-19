#include <iostream>
using namespace std;
int main(){
	
	char gender;
	cout<<"Enter gender m/f: ";
	cin>>gender;
	
	switch(gender){
		case 'm':
		case 'M':
			cout<<"You are a male."<<endl;
			cout<<"You are strong"<<endl;
			break;
			
		case 'f':
		case 'F':
			cout<<"You are a female."<<endl;
			cout<<"You are beutiful"<<endl;
			break;
		default:
			cout<<"Invalid code";
	}
	
	return 0;
}
