#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int i = 1;
	
	while(i<= 9){
	    cout<< sum <<" + "<< i; 
	    sum = sum + i;
	    cout<<" = "<< sum<<"\n"; 
	i++;			
	}
	
	cout<<"The Sum is: "<<sum; 
	return 0;
}
	
