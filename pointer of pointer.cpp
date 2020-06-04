#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,*p1,**p2;
	x=5;
	p1=&x;
	p2=&p1;
	cout<<"\n x="<<x;
	cout<<"\n address of x="<<&x;
	cout<<"\n address of p1="<<&p1;
	cout<<"\n address of p2="<<&p2;
	return 0;
}
