#include<iostream>
#include<conio.h>
using namespace std;

class person
{
public:
char name[20];
	int number;
};
int main()
{
person obj;
cout<<"Enter the name:";
cin>>obj.name;
cout<<"Enter the number:";
cin>>obj.number;
cout<<obj.name<<":"<<obj.number<<endl;
return 0;
}

