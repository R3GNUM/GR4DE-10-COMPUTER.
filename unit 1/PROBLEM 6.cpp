//Writen by ARSH JAH Class 10.
//Problem 6 page number 14.
#include <iostream>
using namespace std;
main()
{
	int grade;

		cout << "What is your percentage ? ";
	cin >>grade;	 	
	
	if (grade >= 90	)  {
	cout << "You got an A+ ! "<<endl;
	}
	
	else if (grade >= 80 ) {
	cout << "You got an A !  "<<endl;
	}	
	
	else if (grade >= 70)	{	
cout << "You got a B !"<<endl;
}	
	
	else if (grade >= 60) {
 cout << "You got a C !"<<endl;
 }
	
	else if (grade >= 50) {
	cout << "You got a D !"<<endl;
	}
	
	else  {
	   cout << "You Failed !"<<endl;
	    }			
}
