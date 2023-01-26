#include <iostream>
using namespace std;
int totalDigits(int number);
main()
{
	int number;
	int Digits;
	cout  <<  "Enter any number: ";
	cin  >>  number;
	Digits = totalDigits(number);
	cout  <<  "Number of digits: "  <<  Digits;
}
int totalDigits(int number)
{
	int digit = 0;
	while(number != 0)
	{
		number = number / 10;
		digit = digit + 1;
	}
	return digit;
}