#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	try
	{
		throw'a';
	}
	catch(int x)
	{
		cout<<"Caught";
	}
	return 0;
}
