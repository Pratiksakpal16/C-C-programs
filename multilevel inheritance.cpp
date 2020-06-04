#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	char name[100],gender[10];
	int age;
	public:
		void getdata()
		{
			cout<<"Name:";
			gets(name);
			cout<<"Age:";
			cin>>age;
			cout<<"Gender:";
			cin>>gender;
		}
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Gender:"<<gender<<endl;
		}
};
class employee:public person
{
	char company[100];
	float salary;
	public:
		void getdata()
		{
			person::getdata();
			cout<<"Name of company:";
			cin>>company;
			cout<<"Salary is:Rs.";
			cin>>salary;
		}
		void display()
		{
			person::display();
			cout<<"Name of company:"<<company<<endl;
			cout<<"Salary is:Rs."<<salary<<endl;
		}
};
class programmer:public employee
{
	int number;
	public:
		void getdata()
		{
			employee::getdata();
			cout<<"Number of programming language known:";
			cin>>number;
		}
		void display()
		{
			employee::display();
			cout<<"Number of programming language known:"<<number;
		}
};
int main()
{
	programmer p;
	cout<<"Enter data"<<endl;
	p.getdata();
	cout<<endl<<"Displaying data"<<endl;
	p.display();
	return 0;
}
