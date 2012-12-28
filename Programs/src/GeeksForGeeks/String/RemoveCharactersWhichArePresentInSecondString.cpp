/*
 * RemoveCharactersWhichArePresentInSecondString.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<hash_map>
#include<iostream>
using namespace std;
using namespace __gnu_cxx;


//Tested
void RemoveCharactersPresentInSecondString(string firstUserInput,string secondUserInput){

	hash_map<char,int> charactersPresentInSecondString;
	string::iterator secondUserInputTraversal,firstUserInputTraversal;
	hash_map<char,int>::iterator iteratorForHashMap;

	for(secondUserInputTraversal = secondUserInput.begin();secondUserInputTraversal != secondUserInput.end();secondUserInputTraversal++){
		if((iteratorForHashMap = charactersPresentInSecondString.find(*secondUserInputTraversal))!= charactersPresentInSecondString.end()){
			charactersPresentInSecondString[*secondUserInputTraversal]++;
		}else{
			charactersPresentInSecondString[*secondUserInputTraversal] = 1;
		}
	}

	string::iterator ptr = firstUserInput.end();

	for(firstUserInputTraversal = firstUserInput.begin();firstUserInputTraversal != ptr;firstUserInputTraversal++){
		if((iteratorForHashMap = charactersPresentInSecondString.find(*firstUserInputTraversal))!= charactersPresentInSecondString.end()){
			if(charactersPresentInSecondString[*firstUserInputTraversal] > 0){
				firstUserInput.erase(firstUserInputTraversal);
				charactersPresentInSecondString[*firstUserInputTraversal]--;
			}else{
				if(charactersPresentInSecondString[*firstUserInputTraversal] == 0){
					charactersPresentInSecondString.erase(iteratorForHashMap);
				}
			}
		}
	}

	cout << firstUserInput;
}

//
// Strategy 2
//
// 1) Sort the first string
// 2) Sort the second string
// 3) Remove the characters which are present in the second string
//


int main(){
	string firstString = "aaaabbbbccc";
	string secondString = "ddeeddff";
	RemoveCharactersPresentInSecondString(firstString,secondString);
}

