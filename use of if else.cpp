#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,sum;
	cout<<"Enter two nos:";
	cin>>num1>>num2;
	sum=num1+num2;
	if(sum>100)
	{
		cout<<"\n the sum of two nos is greater than 100\n";
	}
	else
	{
		cout<<"\n the sum of two nos is smaller than 100\n";
	}
	getch();
}
