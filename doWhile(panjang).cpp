#include <iostream>
using namespace std;
int main(){
	double mark,totalMark,avg,sumAll=0;
	int counter=1,studentId;
	char proceed='Y';
	do{
		
		while(counter<=3){
			totalMark=0;
			cout<<"Enter student ID: ";
			cin>>studentId;
			for(int i=0;i<3;i++)
			{
				cout<<"Enter mark "<<i<<": ";
				cin>>mark;
				totalMark=totalMark+mark;//totalMark+=mark;
			}
			cout<<"total mark for ID "<<studentId<<" is: "<<totalMark<<endl<<endl;
			sumAll+=totalMark;
			counter++;
		}
		cout<<"Total mark for all students: "<<sumAll<<endl;
		cout<<"The average marks: "<<sumAll/3<<endl<<endl;
		
		//repeat the whole process
		cout<<"Press Y to continue: ";
		cin>>proceed;
	}while(toupper(proceed)=='Y');
	
	cout<<"End of program."<<endl;
	
	return 0;
}
