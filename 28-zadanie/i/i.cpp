#include "stdafx.h"
#include <iostream>
#define SUMARRAY(mas,n) int sum=0; for(int i=0;i<n;i++)sum+=mas[i];

int _tmain(int argc, _TCHAR* argv[]){
  int const n=5;
	int mas[n]={0};
	for(int i=0;i<n;i++){
		mas[i]=rand()%11;
		std::cout<<mas[i]<<"  \t";
	}
	SUMARRAY(mas,n);
	std::cout<<"\n"<<"Sum of el. mas: "<<sum<<"\n";
	std::cin.get();
	return 0;
}

