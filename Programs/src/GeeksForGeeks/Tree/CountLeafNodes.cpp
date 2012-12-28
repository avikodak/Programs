/*
 * CountLeafNodes.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>

using namespace std;

struct node{
	int value;
	node *left;
	node *right;
};


//int NumberOfLeafNodes(node *ptr){
//	bool isLeafNode= false;
//	if(ptr == NULL){
//		return 0;
//	}
//	if(ptr->left == NULL && ptr->right == NULL){
//		isLeafNode = true;
//	}
//}


