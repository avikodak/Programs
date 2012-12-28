/*
 * MaximumOccuringCharacter.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<string>
#include<hash_map>
using namespace std;
using namespace __gnu_cxx;
/*
 * Strategy 1
 * 1) Simple take an array size of 256 since that is the number of ascii characters present
 * 2) Traverse the string and increment the counter of character by 1 whenever you come across a character
 *
 * Extended Version of the above strategy is to create a hash map
 * Saves space for characters which are not present in the string
 */

char ReturnMaxOccuringCharacter(string userInput ){

#define NO_ASCII_CHARACTERS 256
	int charactersCount[NO_ASCII_CHARACTERS] = {0};
	string::iterator userInputIterator;
	int maxCount=0;
	char maxOccuringCharacter;
	for(userInputIterator = userInput.begin();userInputIterator != userInput.end();userInputIterator++){
		charactersCount[int(*userInputIterator)]++;
	}
	int countOfCharacter;
	for(int characterCounter = 0;characterCounter < NO_ASCII_CHARACTERS;characterCounter++){
		countOfCharacter = charactersCount[characterCounter];
		if(maxCount < countOfCharacter){
			maxCount = countOfCharacter;
			maxOccuringCharacter = char(characterCounter);
		}
	}
	return maxOccuringCharacter;
}

/*
 * Strategy 2
 * 1) Sort the string O(nlogn) time
 * 2) Count the characters and return the maximum occuring character
 *
 */


/*
 * Strategy 3
 * 1) Use two loops and check the maximum occuring character
 * 2) Takes O(n^2) time
 *
 */


/*
 * Implementation using hash map
 */

char ReturnMaxOccuringCharacterHashMap(string userInput ){
	hash_map<char,int> characterCount;
	string::iterator  userInputIterator;
	int countOfCharacterInUserInput;
	char character;
	hash_map<char,int>::iterator hashMapCharacterIterator;
	for(userInputIterator = userInput.begin();userInputIterator != userInput.end();userInputIterator++){
		if((hashMapCharacterIterator = characterCount.find(*userInputIterator)) != characterCount.end()){
			character = hashMapCharacterIterator->first;
			countOfCharacterInUserInput = hashMapCharacterIterator->second;
			characterCount[character] = countOfCharacterInUserInput++;
		}else{
			character = hashMapCharacterIterator->first;
			characterCount[character] = 1;
		}
	}

	int maxCountOfCharacter=0;
	char maxOccuringCharacter;
	for(hashMapCharacterIterator = characterCount.begin(); hashMapCharacterIterator != characterCount.end(); hashMapCharacterIterator++){
		if(maxCountOfCharacter < hashMapCharacterIterator->second){
			maxCountOfCharacter = hashMapCharacterIterator->second;
			maxOccuringCharacter = hashMapCharacterIterator->first;
		}
	}

	return maxOccuringCharacter;
}


