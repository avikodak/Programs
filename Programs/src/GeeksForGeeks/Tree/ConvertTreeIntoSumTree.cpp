/*
 * ConvertTreeIntoSumTree.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */



#include<stdio.h>
#include<iostream>
using namespace std;

struct node {
	int value;
	node *left;
	node *right;
	int sumValueAtNode;
};

int ConvertGivenTreeIntoSumTree(node *traversalNode){
	int leftSubtreeSum,rightSubtreeSum;
	if(traversalNode != NULL){
		return 0;
	}
	leftSubtreeSum = ConvertGivenTreeIntoSumTree(traversalNode->left);
	rightSubtreeSum = ConvertGivenTreeIntoSumTree(traversalNode->right);
	traversalNode->sumValueAtNode = leftSubtreeSum + rightSubtreeSum;
	return traversalNode->sumValueAtNode;
}
