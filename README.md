station
=======

for passengers
20.05.13
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class TRAIN
{
private:
string nameStation;
int numberTrain;
int timeDeparture;

public:
  TRAIN():nameStation("string"),numberTrain(17),timeDeparture(10)
  {cout<<" Kostruktor "<<numberTrain;}
  //(string nameStation,int numberPassengers)
//{courseName(nameStation,numberPassengers);
//}


 void setTRAIN(string neStation,int nberTrain, int tiDeparture){
	 nameStation=neStation;
	 numberTrain=nberTrain;
	 timeDeparture=tiDeparture;
 }
	int getName()
 {

	 return numberTrain;
 }
	void displayName ()
{cout<<" name Station : "<<nameStation<<"number Passengers : "<<getName()<<"Time :"<<timeDeparture<<endl;
}
};
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
	cin>>tiDeparture
	my.setTRAIN( neStation,nberTrain,tiDeparture);
	my.displayName();
	system("pause");
	return 0;
}
