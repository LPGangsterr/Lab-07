#include <iostream>
#include <cmath>
using namespace std;
float calculatePrice(float money,int year);
main()
{
	float money;
    	int year;
	cout  <<  "Enter inherited money: ";
    	cin  >>  money;
	cout  <<  "Enter years: ";
	cin  >> year;
	calculatePrice(money,year);
}
float calculatePrice(float money,int year)
{
    	float expense = 0;
    	for (int i = 1800; i <= year; i++)
	{
        	if (i % 2 == 0)
		{
            		expense = expense + 12000;
        	}
		else 
		{
        	   	expense = expense + 12000 + 50 * (i - 1800);
        	}
	}
    	if (money >= expense) 
	{
        	cout << "Yes! He will live a carefree life and will have "  <<  money - expense  <<  " dollars left."  <<  endl;
    	} 
	else 
	{
        cout << "He will need "  <<  expense - money  <<  " dollars to survive."  <<  endl;
    	}
	return 0;
}
