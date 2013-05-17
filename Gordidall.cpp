#include "stdafx.h"
#include <iostream>
#include <string>
//#include <stdlib.h>
#include "jin.h"
using namespace std;
int main()
{
  station my;
	string neStation;
	int nberPassengers;
	cout<<"name station : "<<endl;
	cin>>neStation;
	cout<<"number passengers  :"<<endl;
	cin>>nberPassengers;
	my.setstation( neStation,nberPassengers);
	my.displayName();
	system("pause");
	return 0;
}
