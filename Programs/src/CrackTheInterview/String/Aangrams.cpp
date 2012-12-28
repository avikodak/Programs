/*
 * Aangrams.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<iostream>
using namespace std;

#define NO_OF_ASCII_CHARACTERS 256

int CharacterCount[256]={0};

bool AreBothAnagrams(char *firstString,char *secondString);

//Tested
bool AreBothAnagrams(char *firstString,char *secondString){
	if(strlen(firstString) != strlen(secondString)){
		return false;
	}
	while(*firstString != '\0'){
		CharacterCount[int(*firstString)]++;
		firstString++;
	}
	while(*secondString != '\0'){
		if(CharacterCount[int(*secondString)] <=0){
			return false;
		}
		--CharacterCount[int(*secondString)];
		secondString++;
	}
	return true;
}
