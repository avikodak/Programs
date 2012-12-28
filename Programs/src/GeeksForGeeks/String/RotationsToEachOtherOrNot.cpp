/*
 * RotationsToEachOtherOrNot.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */


#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<cstring>
using namespace std;

//
// Algo 1:
// =======
// Append the string to the first string and find whether the input string is a substring or not
// If the substring is present in the appended string then it means that the given string is a
// rotation of the given string
//

bool IsRotation(string userRotatedString,string userInputString){

	userRotatedString += userRotatedString;
	//int index = strstr(userRotatedString,userInputString);
	//int index = userRotatedString.substr(userInputString);

	return false;
}
