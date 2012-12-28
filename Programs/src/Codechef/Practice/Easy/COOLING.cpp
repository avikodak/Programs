/*
 * COOLING.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int Cooling(){
	int numberOfTestCases;
	for(int testCasesCounter=0;testCasesCounter <numberOfTestCases;testCasesCounter++){
		int numberOfPies;
		cin >> numberOfPies;
		vector<int> weightPies(numberOfPies);
		vector<int> weightRacks(numberOfPies);
		int userInputWeightPie,userInputWeightRack;
		for(int piesCounter=0;piesCounter < numberOfPies;piesCounter++){
			cin >> userInputWeightPie;
			weightPies[piesCounter] = userInputWeightPie;
		}
		for(int rackCounter=0;rackCounter < numberOfPies;rackCounter++){
			cin >> userInputWeightPie;
			weightRacks[rackCounter] = userInputWeightPie;
		}
		sort(weightPies.begin(),weightPies.end());
		sort(weightRacks.begin(),weightRacks.end());

		int totalPies=0;
		for(int piesCounter=0,rackCounter=0;piesCounter < numberOfPies;){
			while(weightRacks[rackCounter] >= weightPies[piesCounter] && rackCounter < piesCounter){
				rackCounter++;
			}
			if(rackCounter >= piesCounter){
				return totalPies;
			}else{
				if(weightRacks[rackCounter] >= weightPies[piesCounter]){
					totalPies++;
					piesCounter++;
				}
			}

		}
	}
	return -1/0;
}


int main(){
	Cooling();
	return 1;
}



