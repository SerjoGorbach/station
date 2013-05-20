#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gorbachidze.h"
using namespace std;
TRAIN::TRAIN(){}
TRAIN::TRAIN( string nameStation, int numberTrain, int timeDeparture)
{nameStation="0";
 numberTrain=0;
 timeDeparture=0;

}
 void TRAIN::setTRAIN(string neStation,int nberTrain, int tiDeparture){
	 nameStation=neStation;
	 numberTrain=nberTrain;
	 timeDeparture=tiDeparture;
 }
	int TRAIN::getName()
 {

	 return numberTrain;
 }
	void TRAIN::displayName ()
{
	cout<<"name Station : "<<nameStation<<": number Passengers : "<<getName()<<": Time :"<<timeDeparture<<endl;
}
