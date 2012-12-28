/*
 * MaxOfArray.cpp
 *
 *  Created on: Dec 10, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;
#define MAX_ELEMENTS 10

int userInput[MAX_ELEMENTS];

int MaxArray(){
	for(int counter=1,maxArray = userInput[0];counter < MAX_ELEMENTS;counter++){
		if(maxArray < userInput[counter]){
			maxArray = userInput[counter];
		}
	}
	return maxArray;
}

int main(){

}

