/*
 * RemoveDuplicatesFromUnsortedArray.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<hash_map>
#include<list>
using namespace std;
using namespace __gnu_cxx;

list<int> RemoveDuplicates(list<int> userInput);

int main(){

}
//To Be Tested
list<int> RemoveDuplicates(list<int> userInput){
	hash_map<int,int> inputData;
	for(list<int>::iterator listIterator= userInput.begin();listIterator != userInput.end();listIterator++){
		if(inputData.find(*listIterator) == inputData.end()){
			inputData[*listIterator] += 1;
		}else{
			inputData[*listIterator] = 1;
		}
	}

	for(list<int>::iterator listIterator= userInput.begin();listIterator != userInput.end();listIterator++){
		if(inputData[*listIterator] > 1){
			inputData[*listIterator] -= 1;
			userInput.remove(*listIterator);
		}
	}
	return userInput;
}
