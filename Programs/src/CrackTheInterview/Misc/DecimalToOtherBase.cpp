/*
 * DecimalToOtherBase.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> DecimalToGivenBase(int,int);

int main(){
	vector<int> NumberInOtherBase = DecimalToGivenBase(10,2);
	for(int startingIndex=NumberInOtherBase.size()-1;startingIndex>=0;startingIndex--){
		printf("%d",NumberInOtherBase[startingIndex]);
	}
}

// Tested
vector<int> DecimalToGivenBase(int number,int base){
	vector<int> NumberInGivenBase;
	int remainder;
	while(number){
		remainder = number % base;
		number /= base;
		NumberInGivenBase.push_back(remainder);
	}
	return NumberInGivenBase;
}

//A = 10
//B = 11
//...
//..
//.
//AA = 37
//..
//.
vector<int> DecimalToGivenBaseWithAlphabets(int number,int base){
	vector<int> NumberInGivenBase;
	int remainder;
	while(number){
		remainder = number % base;
		number /= base;
		NumberInGivenBase.push_back(remainder);
	}
	return NumberInGivenBase;
}
