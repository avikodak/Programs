/*
 * IntersectionOfSortedLinkedList.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;

list<int> IntersectionOfSortedLL(list<int> firstSortedLL,list<int> secondSortedLL){
	list<int> intersectionResult;
	list<int>::iterator firstLLIterator,secondLLIterator;
	firstLLIterator = firstSortedLL.begin();secondLLIterator = secondSortedLL.begin();
	while(firstLLIterator  != firstSortedLL.end() && secondLLIterator != secondSortedLL.end()){
		if(*firstLLIterator == *secondLLIterator){
			intersectionResult.push_back(*firstLLIterator);
		}else{
			if(*firstLLIterator > *secondLLIterator){
				secondLLIterator++;
			}else{
				firstLLIterator++;
			}
		}
	}
	return intersectionResult;
}

//int main(){
//
//}
