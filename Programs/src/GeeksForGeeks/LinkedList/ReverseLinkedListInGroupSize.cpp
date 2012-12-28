/*
 * ReverseLinkedListInGroupSize.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */


#include<stdio.h>
#include<stdlib.h>
#include<list>
#include<algorithm>
#include<hash_map>

using namespace std;
using namespace __gnu_cxx;
#define ReverseInSize 3



list<int> ReverseLinkedListInGroupSize(list<int>);

int main(){
}

//To Be Tested
list<int> ReverseLinkedListInGroupSize(list<int> userInput){
	bool Reverse = true;
	int counter=0;
	list<int>::iterator startingPoint = userInput.begin(),endingPoint;
	list<int>::iterator listIterator;
	for(listIterator = userInput.begin();listIterator != userInput.end();listIterator++){
		counter++;
		if(counter == ReverseInSize && Reverse){
			endingPoint = listIterator;
			reverse(startingPoint,endingPoint);
			Reverse  = false;
		}else{
			startingPoint = listIterator;
		}
	}
	if(Reverse){
		reverse(startingPoint,listIterator);
	}

	return userInput;
}



