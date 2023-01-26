#include <iostream>
using namespace std;
void printPercentage(int count);
main()
{
	float count;
	cout  <<  "Enter any number for loop repetition: ";
	cin  >>  count;
	printPercentage(count);
}
void printPercentage(int count)
{
	float p1 = 0;
	float p2 = 0;
	float p3 = 0;
	float p4 = 0;
	float p5 = 0;
	float s1 = 0;
	float s2 = 0;
	float s3 = 0;
	float s4 = 0;
	float s5 = 0;
	for(float n;count >= 1;count--)
	{
		cout  <<  "Enter any number: ";
		cin  >>  n;
		if(n < 200)
		{
			p1 = (n/1000)*100;
			s1 = s1 + p1;
		}
		else if(n >= 200  &&  n <= 399)
		{
			p2 = (n/1000)*100;
			s2 = s2 + p2;
		}
		else if(n >= 400  &&  n <= 599)
		{
			p3 = (n/1000)*100;
			s3 = s3 + p3;
		}
		else if(n >= 600  &&  n <= 799)
		{
			p4 = (n/1000)*100;
			s4 = s4 + p4;
		}
		else if(n >= 800)
		{
			p5 = (n/1000)*100;
			s5 = s5 + p5;
		}
	}
	cout  <<  s1  <<  "%"  <<  endl;
	cout  <<  s2  <<  "%"  <<  endl;
	cout  <<  s3  <<  "%"  <<  endl;
	cout  <<  s4  <<  "%"  <<  endl;
	cout  <<  s5  <<  "%"  <<  endl;

}