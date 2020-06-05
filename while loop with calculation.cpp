#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x=1,n,r;
	cout<<"Enter any number:";
	cin>>n;
	while(x<=10)
	{
		r=n*x;
		cout<<"\n"<<n;
		cout<<"="<<x;
		cout<<" "<<r;
		x++;
	}
	getch();
}
