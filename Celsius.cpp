#include<iostream>
using namespace std;
int main()
{
	int cel,far;
	cout << "Enter Celsius temperature : ";
	cin >> cel;
	cout << "Fahrenheit = " << cel * 1.800 + 32.00 <<  endl ;
	far = cel * 1.800 + 32.00;
	cout << "Now weather in Thailand is  ";
	cout << ((far < 70) == 0 ? "Hot" : "Cool");
	return(0);
}