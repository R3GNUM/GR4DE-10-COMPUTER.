//Writen by ARSH JAH Class 10.
//Problem 12  page number 16.
#include <iostream>
using namespace std;
main()
{
   int F ;   // F is for farein heit which is always a complete value meaning it has no decimal points in it.
   float C ; // C is for Celcius as temprature in celcius maybe in decimal value. 
   
   cout << "Enter temprature in Farein-heit = " ;
   cin  >> F ;
   
   C = (F-32) * 5/9 ; // This is the formula to convert Fareinheit to celcius.
   
   cout << "Temprature after conversion is = " << C <<endl;
	
}
