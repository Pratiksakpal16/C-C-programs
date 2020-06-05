#include<iostream>
#include<conio.h>
using namespace std;
class Example
{
	int a,b;
	public:
	Example()
	{
		a=50;
		b=100;
		cout<<"\ni m constructor";
	}
	Example(int x,int y)
	{
		a=x;
		b=y;
		cout<<"\ni m constructor";
	}
	void Display()
	{
		cout<<"\nValues:"<<a<<"\t"<<b;
	}
};
int main()
{
	Example Object(10,20);
	Example Object2;
	Object.Display();
	Object2.Display();
	return 0;
}

