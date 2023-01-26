#include <iostream>
#include <cmath>
using namespace std;
float calculateMoney(float age,float washingMachinePrice,float toyPrice);
main()
{
	float age;
	float toyPrice;
	float washingMachinePrice;
	cout  <<  "Enter LILY's age: ";
	cin  >>  age;
	cout  <<  "Enter washing machine's price: ";
	cin  >>  washingMachinePrice;
	cout  <<  "Enter toy's price: ";
	cin  >>  toyPrice;
	calculateMoney(age,washingMachinePrice,toyPrice);
}
float calculateMoney(float age,float washingMachinePrice,float toyPrice)
{
	float money = 0;
	for (int i = 2; i <= age; i++)
	{
        	if (i % 2 == 0)
		{
        		money += (i / 2) * 10 - 1;
        	}
		else
		{
        		money = money + toyPrice;
    		}
    	}
    	if (money >= washingMachinePrice)
	{
        	cout  <<  "Yes ! "  <<  round(money - washingMachinePrice)  <<  endl;
    	}
	else
	{
        	cout  <<  "No ! "  <<  round(washingMachinePrice - money)  <<  endl;
    	}
    	return 0;
}
