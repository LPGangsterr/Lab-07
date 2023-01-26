#include <iostream>
using namespace std;
void printTable(int Table);
main()
{
	int Table;
	int Result;
	cout  <<  "Enter any number to print it's table: ";
	cin  >>  Table;
	for(int number = 1;number <= 10;number++)
	{
		Result = Table * number;
		cout  <<  Table  <<  "*"  <<  number  <<  "="  <<  Result  <<  endl;
	}
}
void printTable(int Table)
{
	int Result;
	for(int number = 1;number <= 10;number++)
	{
		Result = Table * number;
		cout  <<  Table  <<  "*"  <<  number  <<  "="  <<  Result  <<  endl;
	}
}
