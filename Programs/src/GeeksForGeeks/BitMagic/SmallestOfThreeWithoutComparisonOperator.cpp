/*
 * SmallestOfThreeWithoutComparisonOperator.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

int SmallestOfThreeNumbers(int firstNumber,int secondNumber,int thirdNumber){
	int count=0;
	while(firstNumber-- && secondNumber-- && thirdNumber--){
		count++;
	}
	return count;
}


