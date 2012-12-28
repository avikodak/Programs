//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int userInput;
	while(1){
		scanf("%d",&userInput);
		if(userInput == 42){
			break;
		}else{
			printf("%d\n",userInput);
		}
	}
	return 0;
}
