#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	start:cout<<"\nEnter number with in one to seven:";
	cin>>a;
	cout<<"you have entered number is \n"<<a;
	switch(a)
	{
		case 1:cout<<"you have selected monday";
		break;
		case 2:cout<<"you have selected tuesday";
		break;
		case 3:cout<<"you have selected wednesday";
		break;
		case 4:cout<<"you have selected thursday";
		break;
		case 5:cout<<"you have selected friday";
		break;
		case 6:cout<<"you have selected saturday";
		break;
		case 7:cout<<"you have selected sunday";
		break;
		default:cout<<"wrong choice";
		goto start;
	}
	getch();
}
