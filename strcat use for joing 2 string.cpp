#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[20],b[20];
	cout<<"Enter 1st string:";
	cin>>a;
	cout<<"Enter 2nd string:";
	cin>>b;
	strcat(a,b);
	cout<<"concatenation of string is:"<<a;
	getch();
}
