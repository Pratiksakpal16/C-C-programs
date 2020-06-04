#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
	public:
		int a,b,c,e;
		float d;
		operation()
		{
			cout<<"\nEnter any integer value of a and b";
			cin>>a>>b;
			c=a+b;
			cout<<"\nAddition of"<<a<<"and"<<b<<"is"<<c;
		}
		operation(int a,float b)
		{
			d=a-b;
			cout<<"\nSubtraction of"<<b<<"from"<<a<<"is"<<d;
		}
		operation(operation &o)
		{
			e=(o.c);
			int f=e*10;
			cout<<"\n\n Multiplication of "<<e<<"and 10 is"<<f;
		}
};
int main()
{
	int a;
	float b;
	class operation o1;
	operation o3(o1);
	cout<<"\n\n Enter any integer and real value";
	cin>>a>>b;
	operation o2(a,b);
	return 0;
}
