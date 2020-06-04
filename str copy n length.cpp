#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[20],b[20];
	int len;
	cout<<"Enter the 1st string:";
	cin>>a;
	len=strlen(a);
	strcpy(b,a);
	cout<<"\ncopy string is:"<<b;
	cout<<"\nlength of string is:"<<len;
	getch();
}
