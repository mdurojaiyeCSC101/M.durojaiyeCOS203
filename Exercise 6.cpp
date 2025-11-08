#include <iostream>
#include<cmath> //for sqrt() and pow() function
using namespace std;

int main(){
	double a;
	double b;
	double interest;
	double balance;
	double int2;
	double year2;
	
	cout<<"Enter STARTING BALANCE: ";
	cin>>a;
	cout<<"Enter ANNUAL INTEREST RATE: ";
	cin>>b;
	
	interest = (a * (b/100));
	balance = a + interest;  
	//NOTE:THE START BALANCE FOR YEAR 2 IS (BALANCE + INTEREST = FINAL BALANCE) OF YEAR 1
	//THEREFORE THE INTEREST FOR YEAR 2 IS THE PERCENTAGE OF FINAL BALANCE OF YEAR 1  
	int2 =(balance * (b/100));
	year2 = balance + int2;
	
	cout<<"YEARLY INTEREST = "<<interest;
	cout<<"\n1st YEAR BALANCE = "<<balance;
	cout<<"\n2nd YEAR BALANCE = "<<year2;
	return 0;
}



