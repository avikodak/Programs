/*
 * FindIntersectionPointOfLinkedList.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
	int element;
	node *next;
	node(int value){
		element = value;
		next = NULL;
	}
};

int LengthLinkedList(node *ptr){
	if(ptr->next != NULL){
		return 1+LengthLinkedList(ptr->next);
	}else{
		return 0;
	}
}

bool AreIntersecting(node *firstLinkedList,node *secondLinkedList){
	node *lastPtrLL1,*lastPtrLL2;
	while(firstLinkedList->next != NULL){
		firstLinkedList = firstLinkedList->next;
	}
	lastPtrLL1 = firstLinkedList;
	while(secondLinkedList->next != NULL){
		secondLinkedList = secondLinkedList->next;
	}
	lastPtrLL2 = secondLinkedList;

	if(lastPtrLL1 == lastPtrLL2){
		return true;
	}else{
		return false;
	}
}


node * FindIntersectionPoint(node *firstLinkedList,node *secondLinkedList){
	if(AreIntersecting(firstLinkedList,secondLinkedList)){
		int lengthLL1 = LengthLinkedList(firstLinkedList);
		int lengthLL2 = LengthLinkedList(secondLinkedList);
		int listGreaterLength,difference;
		node *traverseFirstList = firstLinkedList,*traverseSecondList = secondLinkedList;
		if(lengthLL1 > lengthLL2){
			difference = lengthLL1 - lengthLL2;
			listGreaterLength  = 1;
		}else{
			difference = lengthLL2 - lengthLL1;
			listGreaterLength = 2;
		}
		if(listGreaterLength == 1){
			while(difference){
				traverseFirstList = traverseFirstList->next;
			}
		}else{
			while(difference){
				traverseSecondList = traverseSecondList->next;
			}
		}
		while(traverseFirstList == traverseSecondList){
			traverseFirstList = traverseFirstList->next;
			traverseSecondList = traverseSecondList->next;
		}
		return traverseFirstList;
	}else{
		return NULL;
	}
}

int main(){

}



