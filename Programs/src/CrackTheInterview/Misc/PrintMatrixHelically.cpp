/*
 * PrintMatrixHelically.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

#define ROW 8
#define COLUMN 8
int matrix[ROW][COLUMN];

void PrintMatrixHelically(int row);

int main(){
	int userInput;
	for(int outerCounter=0;outerCounter < ROW;outerCounter++){
		for(int innerCounter=0;innerCounter < COLUMN;innerCounter++){
			cin  >> userInput;
			matrix[outerCounter][innerCounter] = userInput;
		}
	}
}

void PrintMatrixHelically(int row){

}

