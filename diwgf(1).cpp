// qergreg.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Gorbachidze.h"
using namespace std;
int main()
{
	TRAIN my;
	string neStation;
	int nberTrain;
	int tiDeparture;
	cout<<"name station : "<<endl;
	cin>>neStation;
	cout<<"number passengers  :"<<endl;
	cin>>nberTrain;
	cout<<"Time :"<<endl;
	cin>>tiDeparture;
	my.setTRAIN( neStation,nberTrain,tiDeparture);
	my.displayName();
	system("pause");
	return 0;
}
