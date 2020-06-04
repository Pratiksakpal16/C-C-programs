#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	int sum,multi,div,remainder,minus,increase,decrease;
	c=25;
	d=12;
	cout<<"\nEnter first no:";
	cin>>a;
	cout<<"\nEnter second no:";
	cin>>b;
	sum=a+b;
	minus=a-b;
	multi=a*b;
	div=b/a;
	remainder=a%b;
	increase=++c;
	decrease=--c;
	cout<<"\nsum is:"<<sum;
	cout<<"\nsubtraction is:"<<minus;
	cout<<"\nmultiplication is:"<<multi;
	cout<<"\ndivison is:"<<div;
	cout<<"\nremainder is:"<<remainder;
	cout<<"\nincrement is:"<<increase;
	cout<<"\ndecrement is:"<<decrease;
	getch();
}
