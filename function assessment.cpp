#include <iostream>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <conio.h>
using namespace std;
void login();
char input();
int option();
double pi=3.142;
int main(){

	login();
	input();
	option();
	
	return 0;
}
void login(){
	char username[15],password[12],user[15],pass[12];
	int attempt=4;
	
	cout<<"  REGISTERATION\n"<<"-----------------"<<endl;
	cout<<"New username: ";
	cin.getline(username,15);
	cout<<"New password: ";
	cin.getline(password,12);
	sleep(2);
	system("cls");
	
	while (attempt>0){
		cout<<"\n  LOGIN\n"<<"----------------"<<endl;
        cout<<"Please enter your username: ";
        cin.getline(user,15);
        cout<<"Please enter your password: ";
        cin.getline(pass,12);

        if(strcmp(user,username)==0&&strcmp(pass,password)==0){
            cout<<"\nWelcome "<<user<<" to 3D Geometry Calculator ^-^ \n";
            cout<<"Thank you for logging in.\n";
            //goto pointA;
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
char input(){
	char code;
	do{
		cout<<"-----------------------------------------"<<endl;
		cout<<"| A.| CUBE \t\t\t\t|"<<endl;
		cout<<"| B.| RECTANGLE SOLID \t\t\t|"<<endl;
		cout<<"| C.| SPHERE \t\t\t\t|"<<endl;
		cout<<"| D.| RIGHT CIRCULAR CYLINDER \t\t|"<<endl;
		cout<<"| E.| RIGHT CIRCULAR CONE \t\t|"<<endl;
		cout<<"| F.| SQUARE PYRAMID \t\t\t|"<<endl;
		cout<<"| G.| REGULAR TETRAHEDRON \t\t|"<<endl;
		cout<<"-----------------------------------------"<<endl;
		cout<<"\n Choose 3D Geometry: ";
		cin>>code;
		
	}while(toupper(code)!='A'&& toupper(code)!='B'&& toupper(code)!='C'&& toupper(code)!='D'&& toupper(code)!='E'&& toupper(code)!='F'&& toupper(code)!='G');
	cout<<"\nPress Enter to continue"<<endl;
	getch();
	system("cls");
	return code;
}
int option(){
	int choose;
	do{
	cout<<"---------------------------"<<endl;
	cout<<"1. Volume"<<endl;
	cout<<"2. Surface"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Choose your options: ";
	cin>>choose;
	}while(choose!=1&&choose!=2);
	cout<<"\nPress Enter to continue"<<endl;
	getch();
	system("cls");
	return choose;
}

