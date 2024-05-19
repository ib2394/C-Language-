#include <iostream>
using namespace std;
int main(){
	int num=10,i;
	
	for(i=0;i<10;i++){
		num=num+1;
		if(num%4==0){
			cout<<"\t"<<num<<" can divisible by 4"<<endl;
		}
	}

	return 0;
}

