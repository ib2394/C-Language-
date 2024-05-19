#include <iostream>
#include <math.h>
using namespace std;

void input();
double findVolume();
double findSurface();
void output(double volume, double surface);

double s,volume,surface,option,_3dGeometry;
int main(){
	cout<<"A. CUBE"<<endl;
	cout<<"B. RECTANGLE SOLID"<<endl;
	char proceed;
	do{
		double volume,surface,option;
		char _3dGeometry;
		input();
		volume=findVolume();
		surface=findSurface();
		output(volume,surface);
		
		cout<<"Choose 3D Geometry: ";
		cin>>_3dGeometry;
		cout<<"1. Volume"<<endl;
		cout<<"2. Surface"<<endl;
		cout<<"Choose option 1 or 2: ";
		cin>>option;
		
		if (_3dGeometry=='A' && option==1){
			volume=pow(s,3);}
		else if (_3dGeometry=='A'&& option==2){
			surface=6*pow(s,2);}
		
		
		cout<<"\nPress Y to continue: ";
		cin>>proceed;
	}while(toupper(proceed)=='Y');
	cout<<"End of Program"<<endl;

	return 0;
}
void input(){
	cout<<"Enter side: ";
	cin>>s;
}
double findVolume(){
	if (_3dGeometry=='A' && option==1){
		volume=pow(s,3);}
		return volume;
}
double findSurface(){
	if (_3dGeometry=='A'&& option==2){
		surface=6*pow(s,2);}
		return surface;
}
void output(double volume, double surface){
	cout<<"Volume of "<<_3dGeometry<<" is: "<<volume<<endl;
	cout<<"Surface of "<<_3dGeometry<<" is: "<<surface<<endl;
}
