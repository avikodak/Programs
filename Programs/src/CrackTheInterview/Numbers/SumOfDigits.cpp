/*
 * SumOfDigits.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int SumOfDigits(int userInput);

//Tested
int SumOfDigits(int userInput){
	int sumOfDigits;
	for(;userInput;sumOfDigits+=userInput%10,userInput/=10);
	return sumOfDigits;
}
