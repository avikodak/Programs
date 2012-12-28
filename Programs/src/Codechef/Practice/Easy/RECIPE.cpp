/*
 * RECIPE.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */


#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int GCD(int number1,int number2){
	int dividend,divisor;
	if(number1 < number2){
		divisor = number1;
		dividend = number2;
	}else{
		divisor = number2;
		dividend = number1;
	}

	int remainder;
	while(1){
		remainder = dividend % divisor;
		if(remainder == 0){
			return divisor;
		}else{
			dividend = divisor;
			divisor = remainder;
		}
	}
	return 0;
}

int GCDRepeatedSubstraction(int a,int b){
	int temp = a;
	while(b%temp || a%temp){
		temp--;
	}
	return temp;
}

void RECIPE(){
	int numberOfTestCases,numberOfRecipes;
	cin >> numberOfTestCases;
	for(int testcaseCounter =0; testcaseCounter < numberOfTestCases; testcaseCounter++){
		cin >> numberOfRecipes;
		vector<int> recipesAvailable(numberOfRecipes);
		int userInput;
		cin >> userInput;
		recipesAvailable.push_back(userInput);
		int GCDTracker;
		for(int recipeCounter =1;recipeCounter < numberOfRecipes;recipeCounter++){
			cin >> userInput;
			recipesAvailable.push_back(userInput);
			if(GCDTracker != 1){
				GCDTracker = GCD(recipesAvailable[recipeCounter],GCDTracker);
			}
		}

		for(int counter=0;counter < numberOfRecipes ; counter++){
			printf("%d ",recipesAvailable[counter]/GCDTracker);
		}
		printf("\n");
	}
}

int main(){
	RECIPE();
}



