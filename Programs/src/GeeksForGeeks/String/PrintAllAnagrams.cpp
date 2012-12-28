/*
 * PrintAllAnagrams.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<hash_map>
#include<algorithm>
#include<unordered_map>
using namespace std;
using namespace __gnu_cxx;


void PrintAllAnagrams(string userInput[],int lengthOfArray){
	hash_map<string,list<string>> allPossibleAnagrams;
	list<string> anagramsList;
	hash_map<string,list<string>>::iterator hashMapIterator;
	string userInputString;
	for(int stringCounter=0;stringCounter < lengthOfArray;stringCounter++){
		userInputString = userInput[stringCounter];
		sort(userInputString.begin(),userInputString.end());
		if((hashMapIterator = allPossibleAnagrams.find(userInputString)) != allPossibleAnagrams.end()){
			anagramsList = hashMapIterator->second;
			anagramsList.push_back(userInput[stringCounter]);
		}
	}

	// Print the hash Map
	for(hashMapIterator = allPossibleAnagrams.begin();hashMapIterator != allPossibleAnagrams.end();hashMapIterator++){
		anagramsList = hashMapIterator->second;
		for(list<string>::iterator individualAnagramsList= anagramsList.begin();individualAnagramsList != anagramsList.end();individualAnagramsList++){
			cout << *individualAnagramsList << '\t';
		}
		cout << endl;
	}
}

void PringAllAnagramsMultiMap(){
	//unordered_map<int,int> unorderedList;
}
