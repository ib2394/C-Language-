#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	int code, random;
	random = rand()%2;
	
	cout<<"Enter code (0,1,2): ";
	cin>> code;
	cout<<"Computer :"<<random<<endl;

	
	if ( code == 0 && random == 0 ){
		cout<<"DRAWS"<<endl;
	}
	if ( code == 0 && random == 1 ){
		cout<<"LOSES"<<endl;
	}
	if ( code == 0 && random == 2 ){
		cout<<"WIN"<<endl;
	}
	if ( code == 1 && random == 0 ){
		cout<<"WIN"<<endl;
	}
	if ( code == 1 && random == 1 ){
		cout<<"DRAWS"<<endl;
	}
	if ( code == 1 && random == 2 ){
		cout<<"LOSES"<<endl;
	}
	if ( code == 2 && random == 0 ){
		cout<<"LOSES"<<endl;
	}
	if ( code == 2 && random == 1 ){
		cout<<"WIN"<<endl;
	}
	if ( code == 2 && random == 2 ){
		cout<<"DRAWS"<<endl;
	}
	
	
  return 0;
}

