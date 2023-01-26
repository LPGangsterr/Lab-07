#include <iostream>
using namespace std;
int frequencyChecker(int Number,int Digit);
main()
{
	int Number;
	int Digit;
	int Frequency;
	cout  <<  "Enter any number: ";
	cin  >>  Number;
	cout  <<  "Enter any digit: ";
	cin  >>  Digit;
	Frequency = frequencyChecker(Number,Digit);
	cout  <<  "Number of digits: "  <<  Frequency  <<  endl;
}
int frequencyChecker(int Number,int Digit)
{
	int Remainder;
	int Count = 0;
	while(Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if(Remainder == Digit)
		{
			Count = Count + 1;
		}
	}
	return Count;
}