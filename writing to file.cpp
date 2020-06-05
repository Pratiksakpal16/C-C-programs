#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	fstream st;
	st.open("E:\\pratik.txt",ios::out);
	if(!st)
	{
		cout<<"File creation failed";
	}
	else
	{
		cout<<"New flie created";
		st<<"Hello";
		st.close();
	}
	return 0;
}
