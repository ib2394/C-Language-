#include <iostream>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <conio.h>
using namespace std;
//function prototype
void login();
char input(char x);
int option(int y);
void calculate(char key,int choice);
double pi=3.142;//global variable
int main(){

	char key,code,proceed;
	int choice,choose;
	//function call
	login();
	do{
		key=input(code);
		choice=option(choose);
		calculate(key,choice);
		
		cout<<"\nDo you want to calculate another 3D Geometry (Y/N): ";
		cin>>proceed;
	}while (toupper(proceed)=='Y');
	cout<<"\nThank you for using my 3D Geometry Calculator."<<endl;
	cout<<"Program will be terminated."<<endl;
	return 0;
}
//function definition
void login(){
	char username[15],password[12],user[15],pass[12];
	int attempt=3;
	
	cout<<"\n    REGISTERATION\n"<<"---------------------"<<endl;
	cout<<"New username: ";
	cin.getline(username,15);
	cout<<"New password: ";
	cin.getline(password,12);
	cout<<"---------------------"<<endl;
	cout<<"\nwait for 3 seconds..."<<endl;
	sleep(3);
	system("cls");
	
	while (attempt>0){
		cout<<"\n\tLOGIN\n"<<"---------------------------------------"<<endl;
        cout<<"Please enter your username: ";
        cin.getline(user,15);
        cout<<"Please enter your password: ";
        cin.getline(pass,12);
        cout<<"---------------------------------------"<<endl;

        if(strcmp(user,username)==0&&strcmp(pass,password)==0){
            cout<<"\nWelcome "<<user<<" to 3D Geometry Calculator ^-^ \n";
            cout<<"Thank you for logging in.\n";
            cout<<"\nwait for 3 seconds..."<<endl;
            sleep(2);
            break;
        }
        else if(strcmp(user,username)!=0||strcmp(pass,password)!=0){
            cout<<"\nInvalid login attempt."<<endl;
            attempt--;
            cout<<attempt<<" attempt left"<<endl;
        }
        if(attempt==0){
        	cout<<"\nToo many login attempts! The program will now terminate.\n";
        	exit(0);
		}
	}//while bracket
	sleep(2);
	system("cls");
}
char input(char x){
	char code;
	do{
		cout<<"\n-----------------------------------------"<<endl;
		cout<<"|CODE| 3D GEOMETRY\t\t\t|\n-----------------------------------------"<<endl;
		cout<<"| A. | CUBE \t\t\t\t|"<<endl;
		cout<<"| B. | RECTANGLE SOLID \t\t\t|"<<endl;
		cout<<"| C. | SPHERE \t\t\t\t|"<<endl;
		cout<<"| D. | RIGHT CIRCULAR CYLINDER \t\t|"<<endl;
		cout<<"| E. | RIGHT CIRCULAR CONE \t\t|"<<endl;
		cout<<"| F. | SQUARE PYRAMID \t\t\t|"<<endl;
		cout<<"| G. | REGULAR TETRAHEDRON \t\t|"<<endl;
		cout<<"-----------------------------------------"<<endl;
		cout<<"\n Choose 3D Geometry (only using code): ";
		cin>>code;
		
	}while(toupper(code)!='A'&& toupper(code)!='B'&& toupper(code)!='C'&& toupper(code)!='D'&& toupper(code)!='E'&& toupper(code)!='F'&& toupper(code)!='G');
	cout<<"\nPress Enter to continue"<<endl;
	getch();
	system("cls");
	return code;
}
int option(int y){
	int choose;
	do{
	cout<<"---------------------------"<<endl;
	cout<<"1. Volume"<<endl;
	cout<<"2. Surface"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Choose your option: ";
	cin>>choose;
	}while(choose!=1&&choose!=2);
	cout<<"\nPress Enter to continue"<<endl;
	getch();
	system("cls");
	return choose;
}
void calculate(char key,int choice){
	double volume,surface,s,l,w,h,r;
	if(toupper(key)=='A'&&choice==1){
		cout<<"Enter side: ";
		cin>>s;
		volume=pow(s,3);
	}
	else if (toupper(key)=='A'&&choice==2){
		cout<<"Enter side: ";
		cin>>s;
		surface=6*pow(s,2);
	}
	else if (toupper(key)=='B'&&choice==1){
		cout<<"Enter lenght: ";
		cin>>l;
		cout<<"Enter width: ";
		cin>>w;
		cout<<"Enter height: ";
		cin>>h;
		volume=l*w*h;
	}
	else if (toupper(key)=='B'&&choice==2){
		cout<<"Enter lenght: ";
		cin>>l;
		cout<<"Enter width: ";
		cin>>w;
		cout<<"Enter height: ";
		cin>>h;
		surface=(2*l*w)+(2*l*h)+(2*w*h);
	}
	else if (toupper(key)=='C'&&choice==1){
		cout<<"Enter radius: ";
		cin>>r;
		volume=(1.333)*pi*pow(r,2);//jawapan tak sama mcm dlm calculator
	}
	else if (toupper(key)=='C'&&choice==2){
		cout<<"Enter radius: ";
		cin>>r;
		surface=4*pi*pow(r,2);
	}
	else if (toupper(key)=='D'&&choice==1){
		cout<<"Enter height: ";
		cin>>h;
		cout<<"Enter radius: ";
		cin>>r;
		volume=pi*pow(r,2)*h;
	}
	else if (toupper(key)=='D'&&choice==2){
		cout<<"Enter height: ";
		cin>>h;
		cout<<"Enter radius: ";
		cin>>r;
		surface=(2*pi*r*h)+(2*pi*pow(r,2));
	}
	else if (toupper(key)=='E'&&choice==1){
		cout<<"Enter height: ";
		cin>>h;
		cout<<"Enter radius: ";
		cin>>r;
		volume=((0.3333)*pi*pow(r,2)*h);//tak dpt jwpn sama mcm calculator
	}
	else if (toupper(key)=='E'&&choice==2){
		cout<<"Enter height: ";
		cin>>h;
		cout<<"Enter radius: ";
		cin>>r;
		surface=(pi*r*sqrt((pow(r,2)+pow(h,2)))+pi*pow(r,2));//tak dpt jwpn sama mcm calculator
	}
	else if (toupper(key)=='F'&&choice==1){
		cout<<"Enter side: ";
		cin>>s;
		cout<<"Enter height: ";
		cin>>h;
		volume=0.3333*pow(s,2)*h;
	}
	else if (toupper(key)=='F'&&choice==2){
		cout<<"Enter side: ";
		cin>>s;
		cout<<"Enter height: ";
		cin>>h;
		surface=s*(s+sqrt(pow(s,2)+4*pow(h,2)));
	}
	else if (toupper(key)=='G'&&choice==1){
		cout<<"Enter side: ";
		cin>>s;
		volume=0.08333*sqrt(2*pow(s,2));//tak dpt jwpn sama mcm calculator
	}
	else if (toupper(key)=='G'&&choice==2){
		cout<<"Enter side: ";
		cin>>s;
		surface=(sqrt(3*pow(s,2)));
	}
	if (choice==1){
		cout<<"\nVolume of "<<key<<" is: "<<volume<<endl;
	}	
	else{
		cout<<"\nSurface of "<<key<<" is: "<<surface<<endl;
	}
}
