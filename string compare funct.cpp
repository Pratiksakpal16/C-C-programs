#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[50],b[50];
	cout<<"Enter the first string\n";
	cin>>a;
	cout<<"Enter the second string\n";
	cin>>b;
	if(strcmp(a,b)==0)
	{
		cout<<"Entered strings are equal.\n";
	}
	else
	{
		cout<<"Entered strings are not equal.\n";
	}
	getch();
}
