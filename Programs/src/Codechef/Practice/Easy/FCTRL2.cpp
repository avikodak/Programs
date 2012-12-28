/*
 * FCTRL2.cpp
 *
 *  Created on: 3 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>

using namespace std;
#define maxDigits 1000


int result[maxDigits];
int digits=0;

void SmallFactorial(int number){
	if(number == 1){
		return;
	}else{
		int tempResult ;
		int carry=0;
		int arrayCounter=0;
		for(;arrayCounter<=digits;arrayCounter++){
			tempResult = (result[arrayCounter] * number) + carry;
			result[arrayCounter] = tempResult % 10;
			carry = tempResult/10;
		}
		while(carry){
			digits++;
			result[digits] = carry%10;
			carry /= 10;
		}
		return SmallFactorial(--number);
	}
}

int main(){
	int userInput,totalTestCases;
	cin >> totalTestCases;
	while(totalTestCases){
		scanf("%d",&userInput);
		result[0]=1;
		SmallFactorial(userInput);
		for(int arrayCounter=digits;arrayCounter>=0;arrayCounter--){
			printf("%d",result[arrayCounter]);
		}
		for(int arrayCounter=digits;arrayCounter>=0;arrayCounter--){
			result[arrayCounter]=0;
		}
		result[0]=1;
		digits=0;
		printf("\n");
		totalTestCases--;
	}
}



