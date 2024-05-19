#include <iostream>
using namespace std;
int main(){
	//declaration
	int beverageQty, mealQty,mealCode;
	double totalMeal, totalBeverage, totalAll;
	char beverageCode;
	//process
	cout<<"------------------------------------------"<<endl;
	cout<<"CODE\tMEAL NAME\t\tPRICE(RM)"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"1\tChicken fillet\t\t15.00"<<endl;
	cout<<"2\tRoasted Beef\t\t20.00"<<endl;
	cout<<"3\tRib eye fillet\t\t30.00"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"Enter your meal code: ";
	cin>>mealCode;
	cout<<"Enter quantity for the meal: ";
	cin>>mealQty;
	cout<<"------------------------------------------"<<endl;
	cout<<"CODE\tBEVERAGE NAME\t\tPRICE(RM)"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"S\tSyrup\t\t\t1.50"<<endl;
	cout<<"L\tLychee\t\t\t2.80"<<endl;
	cout<<"C\tCoconut\t\t\t3.50"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"Enter your beverage code: ";
	cin>>beverageCode;
	cout<<"Enter quantity for the beverage: ";
	cin>>beverageQty;
	//calculation for meal
	
	
	cout<<"------------------------------------------"<<endl;
	cout<<"THANK YOU,";
	cout<<"------------------------------------------"<<endl;
	cout<<"Meal x "<<mealQty<<": "<<totalMeal;
	cout<<"Beverage x "<<beverageQty<<": "<<totalBeverage;
	cout<<"Total all: "<<totalAll;
	
	return 0;
	
}
