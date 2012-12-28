/*
 * TLG.cpp
 *
 *  Created on: 4 Dec 2012
 *      Author: Samatha
 */
#include<stdio.h>
#include<iostream>

using namespace std;

void LeadGame(){
	int noOfRounds,player1,player2,maxScore=0,maxPlayer=0,lead;
	cin >> noOfRounds;
	for(int roundsCounter =0;roundsCounter < noOfRounds;roundsCounter++){
		cin >> player1;
		cin >> player2;
		lead = player1 - player2;
		if(lead>0){
			if(maxScore < lead){
				maxScore = lead;
				maxPlayer = 1;
			}
		}else{
			if(maxScore < lead){
				maxScore = lead;
				maxPlayer = 2;
			}
		}
	}
	cout << maxPlayer << " " << maxScore;
}

int main(){
	LeadGame();
	return 1;
}
