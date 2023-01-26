#include <iostream>
using namespace std;
int digitSum(int Number);
main()
{
	int Number;
	cout  <<  "Enter any number: ";
	cin  >>  Number;
	digitSum(Number);
}
int digitSum(int Number)
{
	int Remainder;
	int Sum = 0;
	while(Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Remainder + Sum;
	}
	cout  <<  Sum  <<  endl;
}