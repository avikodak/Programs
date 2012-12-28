/*
 * LinearSearch.cpp
 *
 *  Created on: Dec 10, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
using namespace std;

#define MAX_ELELEMTS 10

int userInput[MAX_ELELEMTS];

int LinearSearch(int key){
	for(int counter;counter<MAX_ELELEMTS;counter++){
		if(userInput[counter] == key){
			return counter;
		}
	}
	return -1;
}
