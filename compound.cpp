#include <iostream>
using namespace std;
int main(){
	
	char code;
	cout<<"Enter code (G, Y, or R): ";
	cin>>code;
	
	if(code=='G' || code=='g')
		cout<<"GREEN";
	else if(code=='Y' || code=='y')
		cout<<"YELLOW";
	else if(code=='R' || code=='r')
	cout<<"RED";
	
	else 
	cout<<"Error in filling code";
	cout<<"\nEnd of Program.";
	
	return 0;
}
