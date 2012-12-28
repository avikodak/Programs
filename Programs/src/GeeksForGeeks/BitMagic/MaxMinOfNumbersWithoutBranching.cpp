/*
 * MaxMinOfNumbersWithoutBranching.cpp
 *
 *  Created on: Dec 26, 2012
 *      Author: AVINASH
 */
#include<stdio.h>
#include<iostream>

using namespace std;

int min(int firstNumber,int secondNumber){
	return (secondNumber ^ ((secondNumber ^ firstNumber) & (firstNumber < secondNumber)));
}

int max(int firstNumber,int secondNumber){
	return (firstNumber ^ ((secondNumber ^ firstNumber) & (firstNumber < secondNumber)));
}



