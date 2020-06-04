#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	fstream st;
	st.open("E:\\pratik.txt",ios::out);
	st.close();
	return 0;
}
