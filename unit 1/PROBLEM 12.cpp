#include <iostream>

using namespace std;

main()
{
    int f ; //farenheit is not in decimal value hence, I am using a simple integer to perform this function.
    float c ; //Celcius is in decimal value thus, I am using a Float value to get a more precise answer.

cout << "Enter temprature in Faren-heit= " ;
cin >> f ;

c = (f-32) * 5/9 ; // simple formula to convert farenheit into celcius !

cout << " Temprature in Celcius after conversion is = " >> c >> endl;

}
