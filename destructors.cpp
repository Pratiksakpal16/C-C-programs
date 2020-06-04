#include<iostream>
#include<conio.h>
using namespace std;
class stud
{
	public:
		char name[10],clas[10];
		int age;
		stud()
		{
			cout<<"\n Enter student name,age and class";
			cin>>name>>age>>clas;
			cout<<"\n Age\tName\tClass";
			cout<<"\n"<<age<<"\t"<<name<<"\t"<<clas;
		}
		~stud()
		{
			cout<<"\n\n Now this is the application of destructor";
			cout<<"\n\nEnter student name,age and class";
			cin>>name>>age>>clas;
			cout<<"\n Age\tName\tClass";
			cout<<"\n"<<age<<"\t"<<name<<"\t"<<clas;
		}
};
int main()
{
	class stud s;
	return 0;
}
