/*
 * PrintAllDuplicates.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<hash_map>
#include<iostream>
#include<string>

using namespace std;
using namespace __gnu_cxx;


void PrintAllDuplicatesCharactersInAString(string userInput){
	hash_map<char,int> characterCount;
	hash_map<char,int>::iterator hashMapIterator;
	for(string::iterator stringTraversal = userInput.begin();stringTraversal != userInput.end();stringTraversal++){
		if((hashMapIterator = characterCount.find(*stringTraversal))!= characterCount.end()){
			characterCount[*stringTraversal]++;
		}else{
			characterCount[*stringTraversal] = 0;
		}
	}

	for(hashMapIterator = characterCount.begin(); hashMapIterator != characterCount.end();hashMapIterator++){
		if(hashMapIterator->second > 1){
			printf("\n%c",hashMapIterator->first);
		}
	}
}
