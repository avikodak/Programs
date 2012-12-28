/*
 * LongestPalindromicSequence.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int LongestPalindromicSequence(string inputString,int start,int end){

	if(inputString[start] == inputString[end]){
		return 2+LongestPalindromicSequence(inputString,start+1,end-1);
	}else{
		return max(LongestPalindromicSequence(inputString,start+1,end),LongestPalindromicSequence(inputString,start,end-1));
	}
}

int main(){
	return 0;
}

