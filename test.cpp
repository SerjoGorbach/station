#include "stdafx.h" 
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
  char a,b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	if(a==b)
	{
		cout<<"Error"<<endl;
		system("pause");
		return 0;
	}
	else if (a<b)
	{
		cout<<"Max :"<<b<<endl;
		cout<<"Min :"<<a<<endl;
	}
	else 
	{

		cout<<"Max :"<<a<<endl;
		cout<<"Min:"<<b<<endl;
	}
	system("pause");
	return 0;
}
