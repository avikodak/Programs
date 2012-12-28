/*
 * ParityOfUnsignedInterger.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<bitset>

using namespace std;
using namespace __gnu_cxx;

int parity(int number){
	bitset<32> bitRepOfNumber(number);
	return ((bitRepOfNumber.count())%2);
}


int parityUsingRightMostSetBit(int number){
	int parity = 0;
	while(number){
		parity = ~parity;
		number = number &(number-1);
	}
	return parity;
}
