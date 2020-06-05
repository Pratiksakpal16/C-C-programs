#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int age;
	char name[100];
	cout<<"\nEnter your name:";
	cin>>name;
	cout<<"\nEnter your age:";
	cin>>age;
	if(age>=19)
	{
		cout<<"\n you are eligible to vote\n";
	}
	else
	{
		cout<<"\n you are not eligible to vote\n";
	}
	getch();
}
