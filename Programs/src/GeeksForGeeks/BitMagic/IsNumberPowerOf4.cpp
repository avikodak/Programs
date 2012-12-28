/*
 * IsNumberPowerOf4.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<cmath>
#include<iostream>
#include<bitset>
using namespace std;

bool IsNumberPowerOf4(int number){
	unsigned int firstSetBit = log(number);
	number = ~number;
	bitset<32> bitPatternOfNumber(number);
	bitPatternOfNumber.flip();
	if(firstSetBit == bitPatternOfNumber.count() && (bitPatternOfNumber.count()/2) == 1){
		return true;
	}
	return false;
}




