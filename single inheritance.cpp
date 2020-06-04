#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		void disp()
		{
			cout<<"\nBASE CLASS";
		}
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"\nDERIVED CLASS";
			disp();
		}
};
int main()
{
	derived dobj;
	dobj.show();
	dobj.disp();
	return 0;
}
