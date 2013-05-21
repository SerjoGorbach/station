// Gorila.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  cout<<fixed<<setprecision(2);
	double sum,value=5000000000,rate,many;
	for(int i=1;i<=10;i++){
		for(many=1;many<=10;many++)
		{
			many=value*5/100;
			sum=value+many;
		}//rate=(25+rand()%5)*0.01;
		//sum=value*pow(1+rate,i);
		cout<<2010+i<<"\t"<<sum+many<<endl;
	}
	_getch();
	return 0;
}
