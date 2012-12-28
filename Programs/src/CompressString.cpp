/*
 * CompreeString.cpp
 *
 *  Created on: Dec 22, 2012
 *      Author: AVINASH
 */
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

#define MAX_SIZE 100
int inputArray[100];
int endIndex;

void ShiftElementsRightAndInsertElement(int from,int end,int element){
	if(end+1 < MAX_SIZE){
		int traverseArray = end+1;
		while(traverseArray > from){
			inputArray[traverseArray] = inputArray[traverseArray-1];
		}
		inputArray[traverseArray] = element;
	}else{
		//Array is upto the maximum capacity
		//For Now Lets Skip this case
		//We can use different memory increment strategies
		//like Increase by a constant factor or doubling strategy
	}
}

void CompressString(){
	int traversalIndex1=0,traversalIndex2;
	int counter=0;
	while(traversalIndex1 <= endIndex){
		traversalIndex2 = traversalIndex1;
		while(traversalIndex2 <= endIndex && traversalIndex2+1 <= endIndex){
			if(inputArray[traversalIndex2]== inputArray[traversalIndex2+1]){
				counter++;
			}
		}

	}
}


int main(){

}



