/*
 * NextPowerOf2OfGivenNumber.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int NextPowerOf2OfGivenNumber(int userInput){
	int leftMostBit = log(userInput);
	return pow(2,leftMostBit+1);
}


