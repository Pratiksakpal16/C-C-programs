#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public:
		student(char name[50],int age,int rol,char clas[50])
		{
			cout<<"\n R.No.\tAge\tName\tClass";
			cout<<"\n"<<rol<<"\t"<<age<<"\t"<<name<<"\t"<<clas;
		}
};
int main()
{
	char name[50],clas[50];
	int age,rol;
	cout<<"\n Student name,age,roll number and class";
	cin>>name>>age>>rol>>clas;
	class student s(name,age,rol,clas);
}
