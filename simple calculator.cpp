#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int num1,num2, cho;
	float results;
	string operation;
	
	cout<<" ______________________________________________________________________"<<endl;
	cout<<"|                 Simple Calculator Project                            |"<<endl;
	cout<<"|______________________________________________________________________|"<<endl;
	cout<<"|   Select The Following Mathematical Operation operators:             |"<<endl;
	cout<<"|   1. Addition                                                        |"<<endl;
	cout<<"|   2. Subtraction                                                     |"<<endl;
	cout<<"|   3. Multiplication                                                  |"<<endl;
	cout<<"|   4. Division                                                        |"<<endl;
	cout<<"|______________________________________________________________________|"<<endl;
	cout<<endl;
	
	cout<<"   Enter Options               : ";
	cin>>cho;
	cout<<"   Enter The First Number      : ";
	cin>>num1;
	cout<<"   Enter The Second Number     : ";
	cin>>num2;	
	
	switch(cho){
	        case 1 : results=num1+num2;
			operation='+';
			break;
		case 2 : results=num1-num2;
			operation='-';
			break;
		case 3 : results=num1*num2;
			operation='*';
			break;
		case 4 : results=num1/num2;
			operation='/';
			break;
		default :
			cout<<"Wrong Operation"<<endl;
	}
	cout<<"-------------------------------------------------"<<endl;
	cout<<"   The Result                  : "<<num1<<operation<<num2<<"="<<results<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	getch();
}
