#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		virtual void disp()
		{
			cout<<"\nBase class function disp";
		}
		virtual void show()
		{
			cout<<"\nBase class function show";
		}
};
class sub:public base
{
	public:
		void disp()
		{
			cout<<"\nSub class function disp";
		}
		void show()
		{
			cout<<"\nSub class function show";
		}
};
int main()
{
	base bobj;
	sub sobj;
	base*bptr;
	
	cout<<"\n--POINT TO BASE--";
	bptr=&bobj;
	bptr->disp();
	bptr->show();
	
	cout<<"\n--POINT TO SUB--";
	bptr=&sobj;
	bptr->disp();
	bptr->show();
	return 0;
}
