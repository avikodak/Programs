/*
 * Palindromes.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include<iostream>
using namespace std;

bool IsPalindrome(char *firstString,int start,int end);
bool IsPalindromeNonRecursive(char *userInput);

//Tested
bool IsPalindrome(char *userInput,int start,int end){
	if(start == end){
		return true;
	}
	if(start > end){
		return true;
	}else{
		if(*(userInput+start) == *(userInput+end)){
			return IsPalindrome(userInput,++start,--end);
		}else{
			return false;
		}
	}
	return false;
}

//Tested
bool IsPalindromeNonRecursive(char *userInput){
	int length = strlen(userInput);
	for(int frontPtr=0,rearPtr=length-1;userInput[frontPtr] == userInput[rearPtr];frontPtr++,rearPtr--){
		if(frontPtr == rearPtr || frontPtr > rearPtr)
			return true;
	}
	return false;
}
