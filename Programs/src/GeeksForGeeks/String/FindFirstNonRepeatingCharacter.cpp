/*
 * FindFirstNonRepeatingCharacter.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
#define NoOfAsciiChars 256
#define null NULL

int characterCountArray[NoOfAsciiChars]={0};

//Tested
// Conditions To Be Checked
// 1) If the input String is Null
// 2) If the character is not a ascii character

char FindFirstNonRepeatingCharacter(char *inputString){
	int lengthOfString = strlen(inputString);
	char *headString = inputString;

	int temp= lengthOfString;
	while(temp){
		characterCountArray[int(*inputString)]++;
		inputString++;
		temp--;
	}
	inputString = headString;
	temp = lengthOfString;
	while(temp){
		if(characterCountArray[int(*inputString)] == 1){
			return *inputString;
		}
		inputString++;
		temp--;
	}
	return char('\0');
}


int main(){
	char *userString = "GEEKSFORGEEKS";
	printf("%c",FindFirstNonRepeatingCharacter(userString));
}
