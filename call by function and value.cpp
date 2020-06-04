#include<iostream>
#include<conio.h>
using namespace std;
class Square
{
	int x,s;
	public:
		void input(int n)
		{
			x=n;
		}
		void process()
		{
			s=x*x;
		}
		void output()
		{
			cout<<"\nSquare"<<s;
		}
};
int main()
{
	int a;
	Square obj;
	cout<<"\nEnter any number:";
	cin>>a;
	obj.input(a);
	obj.process();
	obj.output();
	return 0;
}
