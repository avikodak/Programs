/*
 * EASYPROB.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

vector<bool> ConvertDecimaloBinary(int decimalNumber){
	vector<bool> binaryRep(32);
	int bit,counterVector=0;
	while(decimalNumber != 1){
		bit = decimalNumber%2;
		decimalNumber /= 2;
		binaryRep[counterVector] = bit;
		counterVector++;
	}
	return binaryRep;
}




void EASYPROB(int decimalNumber){
	vector<bool> binaryRep(32);
	int bit,counterVector=0;
	while(decimalNumber != 1){
		bit = decimalNumber%2;
		decimalNumber /= 2;
		binaryRep[counterVector] = bit;
		counterVector++;
	}
	for(int vectorCounter=0;vectorCounter < counterVector;vectorCounter++){
			// Implement Logic
	}
}

int main(){

}

