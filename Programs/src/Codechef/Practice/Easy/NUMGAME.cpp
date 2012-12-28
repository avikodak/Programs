/*
 * NUMGAME.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>

using namespace std;

int findGreatestDivisor(int inputNumber){
	if(inputNumber == 1){
		return 0; // Proper Divisor
	}
	for(int counterDivisor=2;counterDivisor <= inputNumber/2;counterDivisor++){
		if(inputNumber%counterDivisor == 0){
			return inputNumber/counterDivisor;
		}
	}
	return 1;
}

int TotalNumberOfSteps(){
	return 1;
}

int main(){
	return 1;
}



