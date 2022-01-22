//Written by Arsh Jah class 10.
//Problem 2 page number 12. 

#include <iostream>
using namespace std;
main()
{
	int number1;
	int number2;
	int number3;
	
cout << "Give first number  = ";
 	cin >> number1;
cout << "Give second number = ";
    cin >> number2;
cout << "Give third number = ";
    cin >> number3;
    
	if(number1>number2 && number1>number3)
	{cout<<"First number is the greatest which is = " <<number1<<endl;}
	else if(number2>number1 && number2>number3)
	{cout <<"Second number is the greatest which is = " <<number2<<endl;}
	else if (number3>number1 && number3>number2)
	{cout <<"Third number is the greatest which is = " <<number3<<endl;}
	else { cout << "All numbers are equal!"<<endl;}
	
}
