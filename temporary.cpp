#include <iostream>
using namespace std;
int main() {
	//declaration 
	double distance, totalPaid;
	
	//prompt
	cout<<"Enter your distance(KM): ";
	cin>>distance;
	
	//calculation 
	totalPaid = distance * 0.75;
	
	//output
	cout<<"The total of the distance is: RM "<<totalPaid;
	
	
	return 0;
}

