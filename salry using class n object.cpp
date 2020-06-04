#include<iostream>
#include<conio.h>
using namespace std;
class salary
{
	int b,h,t,g,pf,tx,n;
	public:
		void input()
		{
			cout<<"\nEnter basic salary:";
			cin>>b;
		}
		void process()
		{
			g=b+h+t;
			h=b*0.10;
			pf=b*0.010;
			tx=b*0.05;
			t=b*0.010;
			n=pf+t-g;
		}
		void output()
		{
			cout<<"\nHRA="<<h;
			cout<<"\nTravelling Allowance="<<t;
			cout<<"\nGross Salary="<<g;
			cout<<"\nPF="<<pf;
			cout<<"\nTax Deduction="<<tx;
			cout<<"\nNet Salary="<<n;
		}
};
int main()
{
salary obj;
obj.input();
obj.process();
obj.output();
return 0;
}
