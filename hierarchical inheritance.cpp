#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		int x;
		void disp()
		{
			cout<<"\nBASE CLASS";
		}
};
class d1:public base
{
	public:
		void disp2()
		{
			x=56;
			cout<<"\nDerived1 CLASS"<<x;
		}
};
class d2:public base
{
	public:
		void show()
		{
			cout<<"\nDERIVED2 CLASS";
		}
};
int main()
{
	d1 dobj1;
	dobj1.disp();
	dobj1.disp2();
	d2 dobj2;
	dobj2.disp();
	dobj2.show();
	return 0;
}
