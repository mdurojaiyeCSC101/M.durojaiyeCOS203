#include<iostream>
using namespace std;

int main(){
	double TPA;
	double ST;
	
	cout<<"Enter TPA = ";
	cin>>TPA;
	
	ST = 0.06 * TPA;
	
	cout<<"Sales Tax = "<<ST;
	return 0;
}
