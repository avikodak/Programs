/*
 * KnapsackProblem.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */


#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<bitset>
using namespace std;

#define ROWS 6
#define COLUMNS 5
#define ITEMS 4
int table[ROWS][COLUMNS];

vector<int> weights;
vector<int> benefits;


int KnapSackProblem_0_1(int index,int weight){
	if(weight <=0 || index < 0){
		return 0;
	}
	if(weights[index] > weight){
		return KnapSackProblem_0_1(index-1,weight);
	}else{
		return max(KnapSackProblem_0_1(index-1,weight),benefits[index] + KnapSackProblem_0_1(index-1,weight - weights[index]));
	}
}

void InitializeTableKnapsackDP(){
	for(int rowInit = 0 ;rowInit < ROWS ; rowInit++){
		table[0][rowInit] = 0;
	}
	for(int columnInit = 0 ;columnInit < COLUMNS ; columnInit++){
		table[columnInit][0] = 0;
	}

}

int KnapSackProblem_0_1_TopBottomDP(int index,int weight){
	InitializeTableKnapsackDP();
	int rowCounter,columnCounter;
	for(rowCounter = 1;rowCounter<ROWS;rowCounter++){
		for(columnCounter=1;columnCounter<COLUMNS;columnCounter++){
			table[rowCounter][columnCounter] = max(table[rowCounter-1][columnCounter],benefits[rowCounter]+table[rowCounter-1][columnCounter-weights[rowCounter]]);
		}
	}
	return table[ROWS-1][COLUMNS-1];
}

int KnapSack_0_1_Generate_All_Sets(){

	//Generate All Sets Using BitVector
	int totalSets = pow(2,ITEMS);

	for(int subSetCounter=0;subSetCounter < totalSets;subSetCounter++){
		bitset<ITEMS> numberInBinary(subSetCounter);
		string ItemsInSubSet = NULL;
		for(int GeneratingSetCounter=1;GeneratingSetCounter <= numberInBinary.size();GeneratingSetCounter++){
			if(numberInBinary[GeneratingSetCounter] == 1){
				ItemsInSubSet += weights[GeneratingSetCounter];
			}
		}
		cout << ItemsInSubSet;
	}

	//Generate All Sets Using Loops

	return -1/0;
}

int main()
{
	weights.push_back(2);
	weights.push_back(3);
	weights.push_back(4);
	weights.push_back(5);

	benefits.push_back(3);
	benefits.push_back(4);
	benefits.push_back(5);
	benefits.push_back(6);

	printf("Max Benefit %d",KnapSackProblem_0_1(0,5));
}


