#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float basic,da,hra,salary;
	char d[50];
	cout<<"\nEnter your name:";
	cin>>d;
	cout<<"\nEnter the basic salary:";
	cin>>basic;
	da=basic*40/100;
	hra=basic*25/100;
	salary=basic+da+hra;
	cout<<"\nyour name is:"<<d;
	cout<<"\n\n salary details:";
	cout<<"\n basic salary is:"<<basic;
	cout<<"\n dearness allowance is:"<<da;
	cout<<"\n house rent allowance is:"<<hra;
	cout<<"\n\n total salary earned is\n"<<salary;
	if(salary>=80000)
	{
		cout<<"\nYou are CEO";
	}
	else if(salary>=50000)
	{
		cout<<"\nYou are purchase manager";
	}
	else if(salary>=25000)
	{
		cout<<"\n You are sales manager"; 
	}
	else
	{
		cout<<"\nYou are clerk";
	}
	getch(); 
}
