/*
 * SUMTRAIN.cpp
 *
 *  Created on: 3 Dec 2012
 *      Author: Samatha
 */
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int * GetElementRow(int elementIndex,int maxRows){
	int maxElementsInRow,maxElementsInNextRow;
	int resultArray[2];
	for(int rowCounter=1;rowCounter < maxRows ; rowCounter++){
		maxElementsInRow = ((rowCounter+1)*rowCounter)/2;
		maxElementsInNextRow = ((rowCounter+1)*(rowCounter+2))/2;
		if(elementIndex>maxElementsInRow && elementIndex<maxElementsInNextRow){
			resultArray[0] = rowCounter+1;
			resultArray[1] = maxElementsInRow;
			return resultArray;
		}
	}
	return NULL;
}

int MaximumSumTriangle(int rows){
	int totalElements = ((rows+1)*rows)/2;
	vector<int> userInput(totalElements);
	vector<int> maxTriangle(totalElements);
	for(int userInputCounter=0;userInputCounter < totalElements ; userInputCounter++){
		cin >> userInput[userInputCounter];
	}
	maxTriangle[0] =userInput[0];
	int noElementsLeavingLastRow = ((rows)*(rows-1))/2;
	int bottomElement,bottomRightElement,sumBottomElement,sumBottomRightElement;
	for(int maxBuildCounter=0;maxBuildCounter<noElementsLeavingLastRow;maxBuildCounter){
		int *elementInRow = GetElementRow(userInput[maxBuildCounter],rows);
		sumBottomElement = userInput[elementInRow[0]] + userInput[bottomElement];
		sumBottomRightElement = userInput[elementInRow[0]] + userInput[bottomElement];
		if(sumBottomElement > maxTriangle[bottomElement]){
			maxTriangle[bottomElement] = sumBottomElement;
		}
		if(sumBottomRightElement > maxTriangle[bottomElement]){
			maxTriangle[bottomRightElement] = sumBottomRightElement;
		}
	}
	int maxElement=maxTriangle[noElementsLeavingLastRow];

	for(int maxCounter=noElementsLeavingLastRow+1;maxCounter<totalElements;maxCounter++){
		if(maxElement < maxTriangle[maxCounter]){
			maxElement = maxTriangle[maxCounter];
		}
	}
	return maxElement;
}

int main(){
	int noOfTestCases,noOfRows;
	cin >> noOfTestCases;
	for(int testCounter=0;testCounter<noOfTestCases;testCounter++){
		cin >> noOfRows;
		MaximumSumTriangle(noOfRows);
	}
}


