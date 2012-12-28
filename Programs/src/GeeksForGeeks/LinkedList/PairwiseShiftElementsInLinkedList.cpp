/*
 * PairwiseShiftElementsInLinkedList.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;

list<int> PairWiseShiftElements(list<int> userInput);


int main(){
}

//Should be checked again

list<int> PairWiseShiftElements(list<int> userInput){
	list<int>::iterator firstLLIterator = userInput.begin();
	int counter=1,temp;
	while(firstLLIterator+1 != userInput.end() && firstLLIterator != userInput.end()){
		temp = *firstLLIterator;
		*(firstLLIterator) = *(firstLLIterator+1);
		*(firstLLIterator+1) = temp;
		if(firstLLIterator+1 == userInput.end()){
			break;
		}else{
			firstLLIterator += 2;
		}
	}

	return userInput;
}
