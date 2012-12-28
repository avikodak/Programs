/*
 * Palindromes.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

bool IsPalindrome(int userInput);

//Tested
bool IsPalindrome(int userInput){
	int reverseOfNumber=0,remainder,originalInput = userInput;
	int originalInput = userInput;
	while(userInput){
		remainder =  userInput%10;
		reverseOfNumber = (reverseOfNumber << 3) +  (reverseOfNumber << 1) + remainder;
		userInput /= 10;
	}
	if(reverseOfNumber == originalInput){
		return true;
	}else{
		return false;
	}
}

