#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void swap(int* number1, int* number2){
	int num = *number1;
	*number1 = *number2;
	*number2 = num;
}
int main(){

	
	srand(time(0));
	int number1 = rand()%10;
	int number2 = rand()%10;
	cout<<number1<<"\n";
	cout<<number2<<"\n";
	
	if(number1 < number2){
		swap(&number1,&number2);
	}
	cout<<number1<<"\n";
	cout<<number2<<"\n";
	
	double a;
	double b;
	double c;
	char16_t d;
	int diff;
	
	diff = number1 - number2;
	cout<<"\nMy difference: "<<diff;
	
	cout<<"\nWhat is Your Name:";
	cin>>d;
	
	cout<<"\nEnter Number 1: ";
	cin>>a;
	cout<<"\nEnter Number 2: ";
	cin>>b;
	
	c = a - b;
	
	cout<<"\nYOUR DIFFERENCE = Number1 - Number2";
	cout<<"\nYour Difference = "<<c;
	
	if(c == diff){
		cout<<"\nYou are Correct!, "<<char16_t d;
	}else{
		cout<<"\nYou are Wrong!, "<<char16_t d;
	}
	return 0;
}
