#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	int x,y,a,m,s,d,r;
	public:
		void input()
		{
			cout<<"\nEnter any two nos:";
			cin>>x>>y;
		}
		void process()
		{
			a=x+y;
			m=x*y;
			s=x-y;
			d=x/y;
			r=x%y;
		}
		void output()
		{
			cout<<"\nFirst no:"<<x;
			cout<<"\nSecond no:"<<y;
			cout<<"\nAdd"<<a;
			cout<<"\nMul"<<m;
			cout<<"\nSub"<<s;
			cout<<"\nDiv"<<d;
			cout<<"\nRem"<<r;
		}
};
int main()
{
	sum obj;
	obj.input();
	obj.process();
	obj.output();
	return 0;
}
