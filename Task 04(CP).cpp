#include <iostream>
using namespace std;
main()
{
	int number;
	int x = 0;
	int y = 1;
	cout  <<  "How many numbers of Fibonacci Series you want to print: ";
	cin  >>  number;
	cout  <<  x;
	cout  <<  ","  <<  y;
	for(int number3 = 1;number3 <= number;number3++)
	{
		if(number > 2)
		{
			for(int z = 0;z < (number3 - 2);z++)
			{
				z = x + y;
				x = y;
				y = z;
				cout  <<  ","  <<  z;
			}
		}
	}
}