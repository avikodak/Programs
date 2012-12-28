/*
 * MergeSortedLinkedList.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;

list<int> MergeSortedLL(list<int> firstLL,list<int> secondLL){
	list<int> mergedList;
	list<int>::iterator firstLLIterator = firstLL.end(),secondLLIterator = secondLL.end();
	while(firstLLIterator != firstLL.begin() && secondLLIterator != secondLL.begin()){
		if(*firstLLIterator > *secondLLIterator){
			mergedList.push_front(*firstLLIterator);
			firstLLIterator--;
		}else{
			mergedList.push_front(*secondLLIterator);
			secondLLIterator--;
		}
	}
	if(firstLLIterator == firstLL.begin()){
		while(secondLLIterator != secondLL.begin()){
			mergedList.push_front(*secondLLIterator);
			secondLLIterator--;
		}
	}else{
		while(firstLLIterator != firstLL.begin()){
			mergedList.push_front(*firstLLIterator);
			firstLLIterator--;
		}
	}
	return mergedList;
}

