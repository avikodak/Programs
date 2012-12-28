/*
 * RatInMaze.cpp
 *
 *  Created on: Dec 9, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<vector>
#include<hash_map>
using namespace std;

#define ROWS 3
#define COLUMNS 4
int inputMaze[ROWS][COLUMNS];
int solution[ROWS][COLUMNS];

bool isSafe(){
	return  false;
}


bool MazeSolution(int x,int y){
	if(1){

	}else{
		// Move East
		if(MazeSolution(x+1,y) == true)
			return true;

		// Move South
		if(MazeSolution(x,y-1) == true)
			return true;

		// Move West
		if(MazeSolution(x-1,y) == true)
			return true;

		// Move North
		if(MazeSolution(x,y+1) == true)
			return true;

		solution[x][y] = 0;
	}
	return false;
}

void DriverProgram(){

}


int main(){
	DriverProgram();
}
