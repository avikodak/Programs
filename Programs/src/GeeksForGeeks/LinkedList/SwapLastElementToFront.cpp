/*
 * SwapLastElementToFront.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

///
///
/// Incomplete : This is just traversing and changing the contents O(n)
///
///
#include<stdio.h>
#include<stdlib.h>
#define null NULL
using namespace std;

struct node{
	int element;
	node *next;

	node(int inputValue){
		element = inputValue;
		next  = NULL;
	}
};

void DeleteElement(int key);
node * SearchKey(int key);

int main(){

}

void DeleteElement(int key){
	node *ptr = SearchKey(key);
}


node * SearchKey(int node,int key){
	return null;
}
