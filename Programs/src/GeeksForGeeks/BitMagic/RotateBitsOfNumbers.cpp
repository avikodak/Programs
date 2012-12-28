/*
 * RotateBitsOfNumbers.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<bitset>
#include<cmath>
#include<math.h>
using namespace std;

int RotateBits(int number,int bitsRotation){
	int masking;
	masking = int((pow(2,bitsRotation) - 1));
	masking = masking & number;
	bitset<32> bitsToAppendedInFront;
	number = number >> bitsRotation;
	return number | masking;
}

