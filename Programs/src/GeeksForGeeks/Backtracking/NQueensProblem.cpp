/*
 * NQueensProblem.cpp
 *
 * Created on: 4 Dec 2012
 * Author: Avinash
 */

#include<stdio.h>
#include<iostream>

using namespace std;

#define N 8

int board[N][N];

bool isSafe(int row,int col){

	//Check in Row

	//Check in Upper Diagonal

	//Check in Lower Diagonal

	return false;
}


void NQueensProblem(int column){
	if(column > N){
		return true;
	}
	for(i=0;i<N;i++)
	{
		if(isSafe(i,col)){
			board[i][column] = 1;
			if(true == NQueensProblem(column+1))
				return true;
			board[i][column] = 0;
		}
	}

	return false;

}

void DriverProgram(){

}

int main(){
	return 1;
}

