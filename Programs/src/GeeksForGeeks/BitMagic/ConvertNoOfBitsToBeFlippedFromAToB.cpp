/*
 * ConvertNoOfBitsToBeFlippedFromAToB.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<bitset>
using namespace std;

int NumberOfBitsRequiredToBeFlipped(int number1,int number2){
	int  XORResult = number1 ^ number2;
	bitset<32> XORResultInBits(XORResult);
	return XORResultInBits.count();
}
