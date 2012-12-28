/*
 * Span.cpp
 *
 *  Created on: Dec 10, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stack>
#include<iostream>

using namespace std;

#define MAX_ELEMENTS 10
int userInput[MAX_ELEMENTS];
int span[MAX_ELEMENTS];

int CalculateSpan(){
	stack<int> spanStack;
	span[0] = 1;
	spanStack.push(0);

	for(int counter=1;counter < MAX_ELEMENTS;counter++){
		while(spanStack.top() < userInput[counter]){
			spanStack.pop();
		}
		if(!spanStack.empty()){
			span[counter] = counter-spanStack.top()+1;
		}else{
			span[counter] = 1;
		}
		spanStack.push(counter);
	}
}

void DriverProgram(){
	int temp;
	for(int counter=0;counter<MAX_ELEMENTS;counter++){
		cin >> temp;
		userInput[counter] = temp;
	}
	CalculateSpan();
}


int main(){
	DriverProgram();
}
