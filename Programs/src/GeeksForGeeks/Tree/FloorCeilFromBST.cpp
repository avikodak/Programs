/*
 * FloorCeilFromBST.cpp
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
	node *right;;
};

int MinValueOfBinarySearchTree(node *ptr){
	if(ptr->left != NULL){
		return MinValueOfBinarySearchTree(ptr->left);
	}
	return ptr->value;
}

int MaxValueOfBinarySearchTree(node *ptr){
	if(ptr->right != NULL){
		return MinValueOfBinarySearchTree(ptr->right);
	}
	return ptr->value;
}

//int FloorOfKeyInBST(node *ptr,int key){
//	if(key == ptr->value){
//		return ptr->value;
//	}
//	if(key < ptr->value){
//		return FloorOfKeyInBST(ptr->left,key);
//	}else{
//		return FloorOfKeyInBST(ptr->right,key);
//	}
//	if(ptr->left == NULL && ptr->right == NULL){
//		return ptr->value;
//	}
//	return 0;
//}

//Ceil Value Node: Node with smallest data larger than or equal to key value.


