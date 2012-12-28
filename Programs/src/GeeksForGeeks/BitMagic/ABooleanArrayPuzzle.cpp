/*
 * ABooleanArrayPuzzle.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

void clearbits(int array[],int size=2){
	array[array[0]] = array[array[1]];
}
