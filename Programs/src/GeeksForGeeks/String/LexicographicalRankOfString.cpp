/*
 * LexicographicalRankOfString.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

/*
 * Naive Method
 * ------------
 * 1) Sort the characters in the lexicographical order
 * 2) Generate all the permutations
 * 3) Accordingly increment the counter
 * 4) And give the rank of the string
 *
 */


/*
 * Use permutation formulae
 *
 */
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

long int Factorial(int number){
	if(number == 1){
		return 1;
	}else{
		return number * Factorial(number-1);
	}

}

long int CalculatePermutation(int a,string trimmedString){
	int lengthOfString = trimmedString.length();

	return (long int)1;
}

int RankInLexicographicalOrdering(string inputString){
	string copyOfInputString = inputString;
	string sortedInputString = &copyOfInputString;
	int lengthOfInputString = inputString.length();
	int rankOfCharacter;
	int totalCount = 0;

	sort(copyOfInputString.begin(),copyOfInputString.end());
	for(int counter = 0; counter< lengthOfInputString;counter++){
		//strchr(sortedInputString,);
		//rankOfCharacter = strchr(sortedInputString,inputString[counter]);
		totalCount += CalculatePermutation(rankOfCharacter,copyOfInputString);
		copyOfInputString.erase(rankOfCharacter);
	}
	return totalCount;
}

