/*
 * LongestIncreasingSubSequence.cpp
 *
 *  Created on: 4 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int inputArray[] = {10,22,9,33,21,50,41,60,80};
int bottomUp[9];
//Tested
int LongestIncreasingSubSequence(int end){
	if(end == 0){
		bottomUp[end]= 1;
		return 1;
	}
	int max = 0,maxFromSubSet;
	bool flag;
	for(int counter = 0;counter < end;counter++){
		if(bottomUp[counter] == 0){
			maxFromSubSet = LongestIncreasingSubSequence(counter);
		}else{
			maxFromSubSet = bottomUp[counter];
		}
		if(inputArray[end] > inputArray[counter]){
			flag =  true;
//			if(max < bottomUp[counter]){
//				max = bottomUp[counter];
//			}
			if(max < maxFromSubSet){
				max = maxFromSubSet;
			}
		}
	}

	//	for(int counter = 0 ; counter < end ; counter++){
	//
	//	}
	if(flag){
		bottomUp[end] = 1+max;
		return 1+max;
	}else{
		bottomUp[end]= 1;
		return 1;
	}
}

int main(){
	cout << "0 ->" << LongestIncreasingSubSequence(0) << endl;
	cout << "====================================================================" << endl;
	cout << "1 ->" << LongestIncreasingSubSequence(1) << endl;
	cout << "=====================================================================" << endl;
	cout << "2 ->"  << LongestIncreasingSubSequence(2) << endl;
	cout << "=====================================================================" << endl;
	cout << "3 ->"  << LongestIncreasingSubSequence(3) << endl;
	cout << "=====================================================================" << endl;
	cout << "4 ->" << LongestIncreasingSubSequence(4) << endl;
	cout << "=====================================================================" << endl;
	cout << "5 ->"  << LongestIncreasingSubSequence(5) << endl;
	cout << "=====================================================================" << endl;
	cout << "6 ->"  << LongestIncreasingSubSequence(6) << endl;
	cout << "=====================================================================" << endl;
	cout << "7 ->" <<LongestIncreasingSubSequence(7) << endl;
	cout << "=====================================================================" << endl;
	cout << "8 ->" <<LongestIncreasingSubSequence(8) << endl;
	cout << "=====================================================================" << endl;

	return 0;
}
