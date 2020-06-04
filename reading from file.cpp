#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	fstream st;
	st.open("E:\\pratik.txt",ios::in);
	if(!st)
	{
		cout<<"No such file";
	}
	else
	{
		char ch;
		while(!st.eof())
		{
			st>>ch;
			cout<<ch;
		}
		st.close();
	}
	return 0;
}
