#include <iostream>
using namespace std;
int main(){
	
	double totalPrice=0,discount,total;
	char code,member;
	cout<<"Welcome to MBA Cinema"<<endl<<endl;
	cout<<"| Code | Made of payment"<<endl;
	cout<<"| [C]  | Credit Card"<<endl;
	cout<<"| [O]  | Online Banking"<<endl;
	cout<<"| [$]  | Cash"<<endl;
	cout<<"\nTotal price      :RM ";
	cin>>totalPrice;
	do{
		cout<<"Mode of Payment  : ";
		cin>>code;
		cout<<"Membership (Y/N) : ";
		cin>>member;
	
		if(toupper(code)=='C'){
			if(toupper(member)=='Y'){
				discount=0.05;
			}
			else if(toupper(member)=='N'){
				discount=0.03;
			}
		}
		else if(toupper(code)=='O'){
			if(toupper(member)=='Y'){
				discount=0.08;
			}
			else if(toupper(member)=='N'){
				discount=0.03;
			}
		}
		else if(toupper(code)=='$'){
			if(toupper(member)=='Y'){
				discount=0.03;
			}
			else if(toupper(member)=='N'){
				discount=0.00;
			}
		}
		else
			cout<<"Invalid Code"<<endl<<endl;
			
	}while(toupper(code)!='C'&&toupper(code)!='O'&&toupper(code)!='$'||toupper(member)!='Y'&&toupper(member)!='N');
	
	total=totalPrice-(totalPrice*discount);
	cout<<"\nYour total after discount: RM "<<total<<endl;
	return 0;
}

