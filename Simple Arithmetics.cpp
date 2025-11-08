#include<iostream>
using namespace std;

int main(){
	double a;
	double b;
	double sum;
	double diff;
	double product;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	
	sum = a + b;
	diff = a - b;
	product = a * b;
	
	cout<<"Sum = "<<sum;
	cout<<"\nDifference = "<<diff;
	cout<<"\nProduct = "<<product;
	return 0;
}
