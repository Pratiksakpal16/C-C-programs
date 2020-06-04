#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	try
	{
		throw 10;
	}
	catch(char *excp)
	{
		cout<<"Caught"<<excp;
	}
	catch(...)
	{
		cout<<"Default Exception\n";
	}
	return 0;
}
