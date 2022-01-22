//Writen by ARSH JAH Class 10.
//Problem 11  page number 16.
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int x,y,z;
y=1;
cout<<"Enter the value for which you want the table:";
cin>>x;
cout<<"Enter the value up to which you want the table:";
cin>>z;
while(y<=z)
{
cout<<x<<"*"<<y<<"="<<y*x<<endl;
y=y+1;
}

}
