#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int nstars=1,stars;
	while(nstars<=10)
	{
		stars=1;
		while(stars<=nstars)
		{
			cout<<"*";
			stars++;
		}
		cout<<"\n";
		nstars++;
	}
	getch();
}
