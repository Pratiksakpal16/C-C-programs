#include<iostream>
#include<conio.h>
using namespace std;
class  base1
{
	public:
		void disp1()
		{
			cout<<"\nBASE1 CLASS";
		}
};
class base2
{
	public:
		void disp2()
		{
			cout<<"\nBASE2 CLASS";
		}
};
class derived:public base1,public base2
{
	public:
		void show()
		{
			cout<<"\nDERIVED CLASS";
		}
};
int main()
{
	derived dobj;
	dobj.show();
	dobj.disp1();
	dobj.disp2();
	return 0;
}
