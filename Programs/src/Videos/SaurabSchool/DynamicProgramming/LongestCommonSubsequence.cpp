/*
 * LongestCommonSubsequence.cpp
 *
 *  Created on: Dec 27, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
#define MAX_SIZE_FIRST_STRING 6
#define MAX_SIZE_SECOND_STRING 7
char firstString[MAX_SIZE_FIRST_STRING]={'A','G','G','T','A','B'};
char secondString[MAX_SIZE_SECOND_STRING] ={'G','X','T','X','A','Y','B'};

//Tested
//int LongestCommonSubsequence(int firstStringPtr,int secondStringPtr){
//	//if(firstStringPtr >= int(MAX_SIZE_FIRST_STRING) || secondStringPtr >= int(MAX_SIZE_SECOND_STRING)){
//	printf("%d %d\n",firstStringPtr,secondStringPtr);
//	if(firstStringPtr ==0 || secondStringPtr ==0){
//		return 0;
//	}else{
//		if(firstString[firstStringPtr-1] == secondString[secondStringPtr-1]){
//			return 1+LongestCommonSubsequence(--firstStringPtr,--secondStringPtr);
//		}else{
//			return max(LongestCommonSubsequence(--firstStringPtr,secondStringPtr) , LongestCommonSubsequence(firstStringPtr,--secondStringPtr));
//		}
//	}
//}

int LongestCommonSubsequence(int firstStringPtr,int secondStringPtr){
	//if(firstStringPtr >= int(MAX_SIZE_FIRST_STRING) || secondStringPtr >= int(MAX_SIZE_SECOND_STRING)){
	printf("%d %d\n",firstStringPtr,secondStringPtr);
	if(firstStringPtr >= MAX_SIZE_FIRST_STRING || secondStringPtr >= MAX_SIZE_SECOND_STRING){
		return 0;
	}else{
		if(firstString[firstStringPtr] == secondString[secondStringPtr]){
			return 1+LongestCommonSubsequence(++firstStringPtr,++secondStringPtr);
		}else{
			return max(LongestCommonSubsequence(++firstStringPtr,secondStringPtr) , LongestCommonSubsequence(firstStringPtr,++secondStringPtr));
		}
	}
}

int main(){
	cout << LongestCommonSubsequence(0,0) << endl;
}


