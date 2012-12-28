/*
 * Print1To100WithoutLoops.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

// Since Loops are not allowed then we have to use recursion
//Tested
void PrintNumbers(int start,int end){
	printf("%d  ",start);
	if(start == end){
		return;
	}else{
		PrintNumbers(++start,end);
	}

}

int main(){
	PrintNumbers(1,100);
}


