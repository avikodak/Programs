/*
 * PrefixAverages.cpp
 *
 *  Created on: Dec 10, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

#define MAX_ELEMENTS 10

int userInput[MAX_ELEMENTS];
int PrefixAverage[MAX_ELEMENTS];

void CalculatePrefixAverages(){
	int temp;
	PrefixAverage[0] = userInput[0];
	for(int counter=1;counter< MAX_ELEMENTS;counter++){
		temp = ((PrefixAverage * (counter))+ userInput[counter])/(counter+1);
		PrefixAverage[counter] = temp;
	}
}





