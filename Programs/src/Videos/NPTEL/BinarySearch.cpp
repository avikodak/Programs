/*
 * BinarySearch.cpp
 *
 *  Created on: Dec 10, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

#define MAX_ELEMENTS 10

int userInput[MAX_ELEMENTS];

int BinarySearch(int start,int end,int key){
	if(start >end){
		return -1;
	}
	int middleElement = (start+end)/2;
	if(userInput[middleElement] == key)
	{
		return middleElement;
	}else{
		if(userInput[middleElement] > key){
			return BinarySearch(start,middleElement-1,key);
		}else{
			return BinarySearch(middleElement+1,end,key);
		}
	}
	return -1/0;
}

void DriverProgram(){

}

int main(){

	DriverProgram();
	return 1;

}
