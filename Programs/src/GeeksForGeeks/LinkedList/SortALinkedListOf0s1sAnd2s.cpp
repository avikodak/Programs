/*
 * SortALinkedListOf0s1sAnd2s.cpp
 *
 *  Created on: Dec 15, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;

int buckets[3];

void SortLinkedList(list<int> userInput){
	list<int>::iterator userInutListIterator;
	for(userInutListIterator = userInput.begin();userInutListIterator != userInput.end();userInutListIterator++){
		buckets[*userInutListIterator] += 1;
	}
	for(int counter=0;counter < 3; counter++){
		for(int subCounter=0;subCounter<buckets[counter];subCounter++){
			printf("%d ",counter);
		}
	}
}

