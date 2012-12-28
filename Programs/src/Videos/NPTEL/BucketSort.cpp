/*
 * BucketSort.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
#define MAX_BUCKETS 10
#define MAX_USER_INPUTS 100

int inputElements[MAX_USER_INPUTS];
int Buckets[MAX_BUCKETS] = {0};

void BucketSort(){
	for(int counter=0;counter < MAX_USER_INPUTS;counter++){
		Buckets[inputElements[counter]]++;
	}

	for(int counter=0,arrayPtr=0;counter < MAX_BUCKETS && arrayPtr < MAX_USER_INPUTS;counter++){
		while(Buckets[counter]){
			inputArray[arrayPtr] = counter;
			arrayPtr++;
		}
	}
}


