/*
 * TurnOffRightMostSetBit.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */


#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int TurnOffRightMostSetBit(int number){
	return (number & (number -1));
}



