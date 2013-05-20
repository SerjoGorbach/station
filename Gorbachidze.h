#include "stdafx.h"
#include <string>
using namespace std;
class TRAIN
{
private:
string nameStation;
int numberTrain;
int timeDeparture;
public:
TRAIN();
TRAIN( string, int, int );
void setTRAIN( string,int,int);

	//void setnameStation(string);
	//string getnameStation();
	//void setnumberTrain(int);
	//int getnumberTrain();
	//void settimeDeparture(int);
//	int gettimeDeparture();
int getName();
void displayName();
};
