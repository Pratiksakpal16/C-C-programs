#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter table number:\n";
	cin>>b;
	for(a=1;a<=10;a++)
	{
		c=a*b;
		cout<<"\n"<<b;
		cout<<"*"<<a;
		cout<<"="<<c;
	}
	getch();
}
