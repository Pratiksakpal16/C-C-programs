#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter three nos:";
	cin>>num1>>num2>>num3;
	if((num1>num2)&&(num1>num3))
	{
		cout<<"\n the largest of three nos is \n"<<num1;
	}
	if((num2>num1)&&(num2>num3))
	{
		cout<<"\n the largest of three nos is \n"<<num2;
	}
	if((num3>num1)&&(num3>num2))
	{
		cout<<"\n the largest of three nos is \n"<<num3;
	}
	getch();
}
