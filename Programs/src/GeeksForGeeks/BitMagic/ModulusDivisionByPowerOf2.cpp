/*
 * ModulusDivisionByPowerOf2.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

bool CheckWhetherANumberIsPowerOf2(int inputNumber){
	return (inputNumber && (!(inputNumber & (inputNumber-1))));
}

int ModulusOperationWhichIsPowerOf2(int inputNumber){
	if(CheckWhetherANumberIsPowerOf2(inputNumber)){
		return (inputNumber && (inputNumber & (inputNumber-1)));
	}
	return 0;
}

