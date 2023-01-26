#include <iostream>
using namespace std;
main()
{
	int Number;
	cout  <<  "Enter a number: ";
	cin  >>  Number;
	while(Number <= 0)
	{
		cout  <<  "Error ! Insert a number greater than zero."  <<  endl;
		cout  <<  "Enter the number again: ";
		cin  >>  Number;
	}
}