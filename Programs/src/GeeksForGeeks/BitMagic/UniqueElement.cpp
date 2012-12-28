/*
 * UniqueElement.cpp
 *
 *  Created on: 4 Dec 2012
 *      Author: Samatha
 */
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int noUserInputs,uniqueElement,userInput;
	cin >> noUserInputs;
	for(int arrayCounter=0;arrayCounter < noUserInputs;arrayCounter++){
		cin >> userInput;
		uniqueElement = uniqueElement ^ userInput;
	}
	printf("%d",uniqueElement);
}



