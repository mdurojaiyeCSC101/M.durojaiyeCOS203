#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	string name;
	bool isPAUStudent;
	int course, location;
	
	cout<<"Enter Full Name => ";
	//FOR STRING: type getline
	getline(cin, name);
	
	//FOR BOOLEAN statement
	cout<<"Is PAU Student? (Type in 1 for TRUE or 0 for FALSE) ==>";
	int flag = -1;
	
	while (true) {
			    cin>>flag;
	    if(flag == 0 || flag == 1) {
	        break; // valid input, exit loop
	    } else {
	        cout<<"Invalid input. Please enter 1 for TRUE or 0 for FALSE: ";
	    }
	}
	cin>>flag;
	isPAUStudent = (flag != 0);
	
	cout<<"Enter course (1-5): \n"<<"\t1.Photography\n"<<"\t2.Painting\n"
	    <<"\t3.Fish Farming\n"<<"\t4.Baking\n"<<"\t5.Public Speaking\n"
	    <<"Enter Your Course Here => ";
	cin>>course;
	
	cout<<"Enter Location (1-5): \n"<<"\t1.Camp House A\n"<<"\t2.Camp House B\n"
	    <<"\t3.Camp House C\n"<<"\t4.Camp House D\n"<<"\t5.Camp House E\n"
	    <<"Enter Your Camp Here => ";
	cin>>location;
	
	//FOR MAPPING CHOICE OF COURSE
	string courseName;
	int days;
	double regFee = 0.0;
	
	switch(course){

		case 1:
		courseName = "Photography";
		days = 3;
		regFee = 10000;
		break;

		case 2:
		courseName = "Painting";
		days = 5;
		regFee = 8000;
		break;

		case 3:
		courseName = "Fish Farming";
		days = 7;
		regFee = 15000;
		break;

		case 4:
		courseName = "Baking";
		days = 5;
		regFee = 13000;
		break;

		case 5:
		courseName = "Public Speaking";
		days = 2;
		regFee = 5000;
		break;

		default:
		cout<<"Invalid Course Selection. \n";
		return 1;
	}
		//FOR MAPPING LOCATION
	string LocName;
	double lodgingperDay = 0.0;

	switch(location){
		case 1:
		LocName = "Camp House A";
		lodgingperDay = 10000;
		break;
		
		case 2:
		LocName = "Camp House B";
		lodgingperDay = 2500;
		break;

		case 3:
		LocName = "Camp House C";
		lodgingperDay = 5000;
		break;

		case 4:
		LocName = "Camp House D";
		lodgingperDay = 13000;
		break;

		case 5:
		LocName = "Camp House E";
		lodgingperDay = 5000;
		break;
	default:
	  cout<<"Search not found";
	  return 1;
	}

  
	
	
	//COMPUTE BASE COST
	double lodgingcost;	
	double total;
	
    lodgingcost = lodgingperDay * days;
	 
	//DECISIONS ON COST RULE for LODGING
	double lodgingDiscount = 0.0;
	double lodgingcostAfter;
	
	if (isPAUStudent && (location == 1 || location == 2)){
		lodgingDiscount = 0.05 * lodgingcost;
	}
	
	lodgingcostAfter = lodgingcost - lodgingDiscount;
	
	//Registration Discount
	double regDiscount = 0.0;
	double regFeeAfter;
	
	if((days > 5) || (regFee > 12000)){
		regDiscount = 0.03 * regFee;
	}
	
	regFeeAfter = regFee - regDiscount;
	
	 total = regFee + lodgingcost;
	 
	//RANDOM NUMBER CREATION 
	int s;
	int r;
	double promo = 0.0;
	
	s = time(0);
	srand(s);
	r = (rand()%100);
	
	if(r==7 || r==77){
		promo = 500;
	}

	total = regFeeAfter	+ lodgingcostAfter - promo;
	
	//OUTPUT
	cout<<"\n";
	cout<<"THE BREAKDOWN OF YOUR COURSE REGISTRATION\n";
	cout<<"Full name : "<<name<<"\n";
	cout<<"PAU Student: "<<(isPAUStudent ? "YES" : "NO")<<"\n";
	cout<<"Course Name:"<<courseName<<"\n";
	cout<<"Number of Days: "<<days<<"\n";
	cout<<"Reg Fee:$ "<<regFee<<"\n";
	cout<<"Reg. Fee After Discount:$ "<<regFeeAfter<<"\n";
	cout<<"Location Name: "<<LocName<<"\n";
	cout<<"Lodging Per Day Fee:$ "<<lodgingperDay<<"\n";
	cout<<"\n";
	cout<<"============================================\n";
	cout<<"Total Lodging Cost:$ "<<lodgingcost<<"\n";
	cout<<"Lodging Cost After Discount:$ "<<lodgingcostAfter<<"\n";
	cout<<"The Random Number Selected: "<<r<<"\n";
//	cout<<"Promo Code: "<<promo<<"\n";
	cout<<"Total Cost:$ "<<total<<"\n";
	
	
	
	//Line 19 shows if isPAUStudent is true print "YES or print "NO if false
	//TO EXIT FROM ANY CODE type RETURN 0 or 1
	//YOU MUST INITIALIZE i.e put 0.0 as an original value on line 67 and 101 and 111.
	return 0;
}
