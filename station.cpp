// Gorbachidze.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class station
{
private:
string nameStation;
int numberPassengers;

public:
  station():nameStation(" string "),numberPassengers(17){cout<<" Kostruktor "<<numberPassengers;}
	//(string nameStation,int numberPassengers)
//{courseName(nameStation,numberPassengers);
//}
void displayName ()
{cout<<" name Station : "<<nameStation<<"number Passengers : "<<getName()<<endl;
}
int getName()
 {
	 
	 return numberPassengers;
 }
 void setstation(string neStation,int nberPassengers){
	 nameStation=neStation;
	  numberPassengers=nberPassengers;
 }
};
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


/* {cout<<"Final"<<getCourseName()<<"!"<<endl;
 private:
	 string courseName;
 };
 */
