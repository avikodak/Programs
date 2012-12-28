/*
 * DetectAndRemoveLoopLinkedList.cpp
 *
 *  Created on: Dec 15, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

struct node{
	int value;
	node *next;
};

int LengthOfLoop(node *ptr);

void RemoveLoop(node *ptr);

void DetectLoopUsingFloydAlgo();

int main(){

}

void DetectLoopUsingFloydAlgo(node *ptr){
	node *slowPtr,*fastPtr;
	slowPtr  = fastPtr =  ptr;
	do{
		if(slowPtr->next != NULL || fastPtr->next->next != NULL){
			slowPtr = slowPtr->next;fastPtr = fastPtr->next->next;
		}else{
			return;
		}
		if(slowPtr == fastPtr){
			//Loop Found
			RemoveLoop(ptr);
			return;
		}
	}while(slowPtr && fastPtr);
}

void RemoveLoop(node *ptr){
	int lengthOfLoop = LengthOfLoop(ptr);
	node *originalPtr = ptr;
	node *offsetPtr = ptr;
	while(lengthOfLoop--){
		offsetPtr = offsetPtr->next;
	}
	while(ptr == offsetPtr){
		ptr = ptr->next;
		offsetPtr = offsetPtr->next;
	}

	// ptr is the pointer to the loop starting node

}

int LengthOfLoop(node *ptr){
	node *originalPtr = ptr;
	int count;
	do{
		ptr = ptr->next;
		count++;
	}while(ptr == originalPtr);
	return count;
}
