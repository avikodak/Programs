/*
 * HOLES.cpp
 *
 *  Created on: 4 Dec 2012
 *      Author: Samatha
 */
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	int noOfTestCases;
	string userInputString;
	cin >> noOfTestCases;
	for(int testCasesCounter=0; testCasesCounter< noOfTestCases; testCasesCounter++){
		cin >> userInputString;
		int holeCounter=0;
		int holeInCharacterResult;
		for(int stringCounter = 0,lengthString = userInputString.size();stringCounter < lengthString;stringCounter++){
			//holeInCharacterResult = holesInCharacter(userInputString[stringCounter]);
			switch(userInputString[stringCounter]){
			case 'A':
			case 'D':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
				holeInCharacterResult=1;
				break;
			case 'B':
				holeInCharacterResult=2;
				break;
			default:
				holeInCharacterResult=0;
				break;
			}
			holeCounter+=holeInCharacterResult;
		}
		cout << holeCounter << endl;

	}
	return 0;
}

//
//int holesInCharacter(char inputCharacter){
//	switch(inputCharacter){
//	case 'A':
//	case 'D':
//	case 'O':
//	case 'P':
//	case 'Q':
//	case 'R':
//		return 1;
//	case 'B':
//		return 2;
//	default:
//		return 0;
//	}
//}
//
//void CountHolesInText(string userInputString){
//	int holeCounter=0;
//	int holeInCharacterResult;
//	for(int stringCounter = 0,lengthString = userInputString.size();stringCounter < lengthString;stringCounter++){
//		holeInCharacterResult = holesInCharacter(userInputString[stringCounter]);
//		switch(userInputString[stringCounter]){
//		case 'A':
//		case 'D':
//		case 'O':
//		case 'P':
//		case 'Q':
//		case 'R':
//			holeInCharacterResult=1;
//			break;
//		case 'B':
//			holeInCharacterResult=2;
//			break;
//		default:
//			holeInCharacterResult=0;
//			break;
//		}
//		holeCounter+=holeInCharacterResult;
//	}
//	cout << holeCounter << endl;
//	return;
//}





