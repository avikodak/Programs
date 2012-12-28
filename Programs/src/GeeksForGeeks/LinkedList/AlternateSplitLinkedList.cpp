/*
 * AlternateSplitLinkedList.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;
#define null NULL

list<int> *AlternateNodesSplitLinkedList(list<int>);

int main(){

}

list<int> *AlternateNodesSplitLinkedList(list<int> userInput){
	list<int> sample[2];
	int counter=1;
	for(list<int>::iterator listIterator= userInput.begin();listIterator != userInput.end();listIterator++){
		if(counter%2 == 1){
			sample[0].push_front(*listIterator);
		}else{
			sample[1].push_front(*listIterator);
		}
		counter++;
	}
	return sample;
}
