#include<iostream>
using namespace std;

int main(){
	int a;
	int b;

	cout<<"Enter age: ";
	cin>>a;
	
	if(a >= 18){
		cout<<"You are an adult";
    }
	if(a < 18){
		cout<<"\nYou are NOT an adult";
	}
	
	return 0;
}
