/*
 * CorrectBST.cpp
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

	node(int element){
		value = element;
		left = NULL;
		right = NULL;
	}
};

node *rootBST = NULL;
bool isBST;

//int IsGivenTreeABST(node *ptr,bool isRight){
//
//	int maxleftTree,minRightTree;
//
//	if(ptr->left != NULL){
//		maxleftTree = IsGivenTreeABST(ptr->left,false);
//	}else{
//		maxleftTree  = ptr->value;
//	}
//
//	if(ptr->right != NULL){
//		minRightTree = IsGivenTreeABST(ptr->right,true);
//	}else{
//		minRightTree = ptr->value;
//	}
//
//	if(ptr->left != NULL && ptr->right != NULL){
//		if(ptr->value > maxleftTree && ptr->value < minRightTree){
//			isBST = true;
//		}else{
//			isBST = false;
//		}
//	}else{
//		if(ptr->left != NULL){
//			if(ptr->value > maxleftTree){
//				isBST = true;
//			}else{
//				isBST = false;
//			}
//		}else{
//			if(ptr->right != NULL){
//				if(ptr->value < minRightTree){
//					isBST = true;
//				}else{
//					isBST = false;
//				}
//			}else{
//				isBST = true;
//			}
//		}
//	}
//
//	if(isRight){
////		if(maxleftTree < ptr->value){
////			maxleftTree = ptr->value;
////		}
//		return maxleftTree;
//	}else{
////		if(minRightTree < ptr->value){
////			minRightTree = ptr->value;
////		}
//		return minRightTree;
//	}
//
//
//}

node *GetParentPointerToInsertElement(node *ptr,int key){
	if(ptr->value == key){
		return NULL;
	}else{
		if(ptr->value > key){
			if(ptr->left!=NULL){
				return GetParentPointerToInsertElement(ptr->left,key);
			}else{
				return ptr;
			}
		}else{
			if(ptr->right != NULL){
				return GetParentPointerToInsertElement(ptr->right,key);
			}else{
				return ptr;
			}
		}
	}
}

void CreateBST(int inputArray[],int noOfElements){
	for(int counter=0;counter < noOfElements; counter++){
		if(rootBST == NULL){
			rootBST = new node(inputArray[counter]);
		}else{
			node *parent = GetParentPointerToInsertElement(rootBST,inputArray[counter]);
			if(parent->value >inputArray[counter]){
				//leftChild
				parent->left = new node(inputArray[counter]);
			}else{
				parent->right = new node(inputArray[counter]);
			}
		}
	}
}


int main(){
	int userInput[12] = {6,3,9,2,4,8,10,1,5,7,11,12};
	CreateBST(userInput,12);
	IsGivenTreeABST(rootBST,true);
}
