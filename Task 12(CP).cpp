#include <iostream>
using namespace std;
int HCF(int a, int b)
{
	int GCD;
	if (b == 0)
	{
        	return a;
	}
	GCD = HCF(b, a % b);
	return GCD;
}
int LCM(int a, int b)
{
	int lcm;
	lcm = (a * b) / HCF(a, b);
	return lcm;
}
main()
{
	int a;
	int b;
	int c;
	int d;
	cout << "Enter 1st positive integers: ";
	cin >> a;
	cout << "Enter 2nd positive integers: ";
	cin >> b;
	c = HCF(a, b);
	d = LCM(a, b);
	cout  <<  "HCF of given numbers is: "  <<  c  <<  endl;
	cout  <<  "LCM of given numbers is: "  <<  d  <<  endl;
}
