#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\nEnter first no:";
	cin>>a;
	cout<<"\nEnter second no:";
	cin>>b;
	cout<<"\n\nPrinting the numbers before interchanging";
	cout<<"\nthe first number is:"<<a;
	cout<<"\nthe second number is:"<<b;
	c=a;
	a=b;
	b=c;
	cout<<"\n\n printing the numbers after interchanging";
	cout<<"\nthe first number is:"<<a;
	cout<<"\nthe second number is:"<<b;
	getch();
}
