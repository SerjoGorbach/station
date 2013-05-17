// Gorbachidze.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
//#include <stdlib.h>
#include "jin.h"
using namespace std;

void station::setstation(string neStation,int nberPassengers)
{
  nameStation=neStation;
	numberPassengers=nberPassengers;
}
int station::getName()
{


	return numberPassengers;
}
void station::displayName ()
{
	cout<<" name Station : "<<nameStation<<"number Passengers : "<<getName()<<endl;
}



