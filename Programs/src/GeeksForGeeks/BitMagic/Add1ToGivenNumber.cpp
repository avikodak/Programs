/*
 * Add1ToGivenNumber.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

int AddOneToNumber(int number){
	int maskBit = 1;
	while(number & maskBit){
		maskBit = maskBit << 1;
	}
	number = number | maskBit;
	return number;
}


