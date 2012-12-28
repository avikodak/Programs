/*
 * CANDLE.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


void CANDLE(){
	int numberOfTestCases;
	vector<int> CandlesAvailable(10);
	for(int testCaseCounter=0;testCaseCounter<numberOfTestCases;testCaseCounter++){
		for(int candlesCounter=0;candlesCounter < 10; candlesCounter++){
			int temp;
			cin >> temp;
			CandlesAvailable[candlesCounter] = temp;
		}
		int minAge=0,ZeroCandles = CandlesAvailable[0],ZeroCounter,counter=0;
		while(1){
			int minNumber,minQuantity;
			minNumber = 0;
			minQuantity = CandlesAvailable[0];
			for(int candlesCounter=1;candlesCounter < 10; candlesCounter++){
				if(minQuantity > CandlesAvailable[candlesCounter]){
					minQuantity = CandlesAvailable[candlesCounter];
					minNumber = candlesCounter;
				}
			}
			if(minNumber == 0 && minAge ==0){
				ZeroCounter++;
				CandlesAvailable[0]++;
			}else{
				if(minQuantity == 0){
					minAge = minAge * pow(10,counter);
					//Complete The Code
				}
			}
		}
	}
}


int main(){
	CANDLE();
}


