/*
 * InsertionSort.cpp
 *
 *  Created on: Dec 10, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
using namespace std;

#define SIZE_OF_ARRAY 10

int userInput[SIZE_OF_ARRAY];

void InsertionSort(){
	int innerCounter,outerCounter,key;
	for(outerCounter=2;outerCounter<SIZE_OF_ARRAY;outerCounter++){
		innerCounter=outerCounter-1;
		key = userInput[outerCounter];
		traversal = outerCounter;
		while(userInput[innerCounter] < key || innerCounter > 0){

			innerCounter--;
		}
	}
}

int main(){
	return -1/0;
}
