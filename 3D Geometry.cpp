#include <iostream>
using namespace std;
int main(){
	char code,username[12],password[20];
	int options;
	double s,l,w,h,r;
	
	cout<<"A. CUBE"<<endl;
	cout<<"B. RECTANGLE SOLID"<<endl;
	cout<<"C. SPHERE"<<endl;
	cout<<"D. RIGHT CIRCULAR CYLINDER"<<endl;
	cout<<"E. RIGHT CIRCULAR CONE"<<endl;
	cout<<"F. SQUARE PYRAMID"<<endl;
	cout<<"G. REGULAR TETRAHEDRON"<<endl<<endl;	
	cout<<"Choose 3D Geometry to calculate: ";
	cin>>code;
	cout<<"-----------------------------------------"<<endl;
	cout<<"\n1. VOLUME"<<endl;
	cout<<"2. SURFACE"<<endl;
	cout<<"CHOOSE OPTIONS 1 OR 2: ";
	cin>>options;
	
	return 0;
}
