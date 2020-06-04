#include<iostream>
#include<conio.h>
using namespace std;
const int MAX=100;
class details
{
	private:
		int salary;
		float rollno;
		public:
			void getname()
			{
				cout<<"\nEnter the salary:";
				cin>>salary;
				cout<<"\nEnter the rollno:";
				cin>>rollno;
			}
			void putname()
			{
				cout<<"Employees salary"<<salary<<"and rollno is"<<rollno<<"\n";
			}
};
int main()
{
	details det[MAX];
	int n=0;
	char ans;
	do{
		cout<<"Enter the employee number:"<<n+1;
		det[n++].getname();
		cout<<"Enter another(y/n)?:";
		cin>>ans;
		}
		while(ans!='n');
		for(int j=0;j<n;j++)
		{
			cout<<"\n Employee number is:"<<j+1;
			det[j].putname();
		}
		return 0;
}

