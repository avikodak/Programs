/*
 * CoinChangeProblem.cpp
 *
 *  Created on: 4 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxCoins=0;

int minimumCoinChange(vector<int> avaialbleDenominations,int trackpointer,int amount){
	if(amount == 0){
		return 0;
	}
	if(amount<0){
		return maxCoins;
	}
	int minimum = maxCoins;
	for(int tracker=0;tracker<trackpointer;tracker++){
		if(avaialbleDenominations[tracker] <= amount){
			int minimumCoins = minimumCoinChange(avaialbleDenominations,tracker,amount - avaialbleDenominations[tracker]);
			if(minimum > minimumCoins){
				minimum = minimumCoins;
			}
		}else{
			return minimum;
		}
	}
	return minimum;
}

int main(){
	printf("Total Number Of Available Denominations\n");
	int totalAvailableDenominations,amount;
	cin >> totalAvailableDenominations;
	vector<int> denominations;
	printf("Enter Available Denominations\n");
	for(int counter=0,inputDenomination;counter<totalAvailableDenominations;counter++){
		cin >> inputDenomination;
		denominations.push_back(inputDenomination);
	}

	sort(denominations.begin(),denominations.end());

	maxCoins = (amount/denominations[0]);

	while(1){
		printf("Enter Amount\n");
		cin >> amount;
		minimumCoinChange(denominations,0,amount);
	}
	return 1;
}


