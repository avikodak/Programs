/*
 * AddNumbersRepresentedByLinkedList.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<list>
using namespace std;

list<int> AddTwoNoInLinkedList(list<int> firstNumber,list<int> secondNumber){
	list<int> Result;
	int carry=0,counterResult=0,temp;
	list<int>::iterator firstNumberIterator,secondNumberIterator;
	firstNumberIterator = firstNumber.end();secondNumberIterator = secondNumber.end();
	while(firstNumberIterator != firstNumber.begin() && secondNumberIterator != secondNumber.begin()){
		temp = *firstNumberIterator + *secondNumberIterator + carry;
		Result.push_front(temp%10);
		carry = temp/10;
		counterResult++;firstNumberIterator--;secondNumberIterator--;
	}
	if(secondNumberIterator == secondNumber.begin()){
		while(firstNumberIterator != firstNumber.begin()){
			temp = *firstNumberIterator + carry;
			Result.push_front(temp%10);
			carry = temp/10;
			firstNumberIterator--;
		}
	}else{
		while(secondNumberIterator != secondNumber.begin()){
			temp = *secondNumberIterator + carry;
			Result.push_front(temp%10);
			carry = temp/10;
			secondNumberIterator--;
		}
	}
	return Result;
}


int main(){

}
