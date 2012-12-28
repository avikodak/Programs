/*
 * StringLibrary.cpp
 *
 *  Created on: Dec 11, 2012
 *      Author: AVINASH
 */
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int myatoi(const char *string);
string stringReverse(string userInput);
int stringLength(char *ptr);
char *toUpper(char *string);
char *toLower(char *string);
int stringLengthNonRecursive(string userInput);
char * searchSubStringON2(char *userInput,char *substr);
int stringCompare(char *firstString,char *secondString);
char *stringCopy(char *originalString);
char *stringConcat(char *source,char *trailingString);

int main(int argc, char* argv[])
{
	char *concatString = stringConcat("sample ","string");
	printf("%s",concatString);
}

//Tested
int myatoi(const char *string)
{
	int i;
	i=0;
	while(*string) {
		i=(i<<3) + (i<<1) + (*string - '0');
		string++;
	}
	return(i);
}

//Tested
string stringReverse(string userInput){
	int length = userInput.length();
	if(length == 1){
		return userInput;
	}else{
		string left = userInput.substr(0,length/2);
		string right = userInput.substr(length/2,length);
		return stringReverse(right)+stringReverse(left);
	}
}

//Tested
int stringLength(char *ptr){
	if(*ptr != '\0'){
		return 1+stringLength(++ptr);
	}else{
		return 0;
	}
}

//Tested
char *stringCopy(char *originalString){
	int lengthOfString = stringLength(originalString);
	char *copiedString = (char *)malloc(lengthOfString*sizeof(char));
	char *headOfCopiedString = copiedString;
	char *stringTraversal;
	stringTraversal = originalString;
	while(*stringTraversal != '\0'){
		*copiedString = *stringTraversal;
		copiedString++;
		stringTraversal++;
	}
	return headOfCopiedString;
}

//Tested
char *toUpper(char *string){
	char *headOfString;
	headOfString = string;
	while(*string != '\0'){
		if(*string >='a' && *string <'z'){
			*string = 'A'+*string-'a';
		}
		string++;
	}
	return headOfString;
}

//Tested
char *toLower(char *string){
	char *headOfString;
	headOfString = string;
	while(*string != '\0'){
		if(*string >='A' && *string <'Z'){
			*string = 'a'+*string-'A';
		}
		string++;
	}
	return headOfString;
}

//Tested
int stringLengthNonRecursive(string userInput){
	string::iterator stringIterator;
	int length=0;
	for(stringIterator=userInput.begin();stringIterator!=userInput.end();stringIterator++){
		length++;
	}
	return length;
}


char * searchSubStringON2(char *userInput,char *substr){
	char *traversalSubString;
	while(*userInput != '\0' && stringLength(userInput) >= stringLength(substr)){
		char *traversalKeyString = userInput;
		while(*traversalKeyString  == *traversalSubString){
			++traversalSubString;
			++traversalKeyString;
			if(traversalSubString == '\0'){
				return userInput;
			}
		}
	}
	return NULL;
}

int stringCompare(char *firstString,char *secondString){
	while(*firstString != '\0' && *secondString != '\0' && *firstString == *secondString){
		firstString++;
		secondString++;
	}

	if(*firstString == '\0'){
		if(*secondString == '\0'){
			return 0;
		}else{
			return 1;
		}
	}else{
		//Complete Code
	}
	return -1;
}


int stringCompareRecursive(char *firstStrin,char *secondString){
	return 0;
}

//Some errors. Concatenation Happens
char *stringConcat(char *source,char *trailingString){
	int lengthOfSrcString = stringLength(source);
	int lengthOfAppendedString = stringLengthNonRecursive(trailingString);
	char *ConcatedString = (char *)malloc((lengthOfSrcString+lengthOfAppendedString+1)*sizeof(char));
	char *headConcatedString = ConcatedString;
	char *traversalString = source;
	while(*traversalString != '\0'){
		*ConcatedString = *traversalString;
		traversalString++;ConcatedString++;
	}
	traversalString = trailingString;
	while(*traversalString != '\0'){
		*ConcatedString = *traversalString;
		traversalString++;ConcatedString++;
	}
	ConcatedString = '\0';
	return headConcatedString;
}

char *ReverseWordsInSentence(string *completeSentence){
	return NULL;
}
