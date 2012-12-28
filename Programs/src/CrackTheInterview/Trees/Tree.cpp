/*
 * Tree.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */


#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<queue>
using namespace std;

#define null NULL
#define PRINT_NEW_LINE printf("\n")
struct node{
public:
	int value;
	struct node *left;
	struct node *right;

	node(int element){
		value = element;
		left = NULL;
		right = NULL;
	}

};

node *rootBST;
node *rootOrderedBinaryTree;

void CreateTree(int [],int);
int HeightOfTree(node *,int);
void MirrorImageOfTree(node *);
void HeightBalancedTree(node *ptr);
int NumberOfElementsInTree(node *);
void PreOrderTraversal(node *);
void PostOrderTraversal(node *);
void InOrderTraversal(node *);
void ConstructTreeFromPreOrderInOrder();
void ConstructTreeFromPreOrder();
void CreateBST(int [],int);
node *GetParentPointerToInsertElement(node *,int);
void PrintLevelOrderOfTree(node *ptr);


int maxHeight=0;
int main(){
	int userInput[12] = {6,3,9,2,4,8,10,1,5,7,11,12};
	CreateBST(userInput,12);
	InOrderTraversal(rootBST);
	PRINT_NEW_LINE;
	PreOrderTraversal(rootBST);
	PRINT_NEW_LINE;
	PostOrderTraversal(rootBST);
	PRINT_NEW_LINE;
	printf("Number of elements in a tree %d",NumberOfElementsInTree(rootBST)+1); // Added 1 for the root node
	PRINT_NEW_LINE;
	PrintLevelOrderOfTree(rootBST);
	CreateTree(userInput,12);
	PRINT_NEW_LINE;
	PrintLevelOrderOfTree(rootOrderedBinaryTree);

	MirrorImageOfTree(rootBST);
	PRINT_NEW_LINE;
	PrintLevelOrderOfTree(rootBST);
}

//Tested
void CreateTree(int inputArray[],int noOfElements){
	queue<node *> levelQueue;
	//int noOfElements = sizeof(inputArray)/sizeof(int);
	for(int counter=0;counter< noOfElements;counter++){
		if(null == rootOrderedBinaryTree){
			rootOrderedBinaryTree = new node(inputArray[counter]);
			levelQueue.push(rootOrderedBinaryTree);
		}else{
			if(counter%2 == 1){
				node *ptr = levelQueue.front();
				ptr->left  = new node(inputArray[counter]);
				levelQueue.push(ptr->left);
			}else{
				node *ptr = levelQueue.front();
				levelQueue.pop();
				ptr->right = new node(inputArray[counter]);
				levelQueue.push(ptr->right);
			}
		}
	}
}

//Tested
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

//void MirrorImageOfTree(node *ptr){
//	node *temp;
//	int swapTempvar;
//	if(ptr->left != null){
//		MirrorImageOfTree(ptr->left);
//		if(ptr->right != null){
//			int temp = ptr->right->value;
//			ptr->right->value = ptr->left->value;
//			ptr->left->value = temp;
//		}else{
//			ptr->right = new node(ptr->left->value);
//			temp = ptr->left;
//			ptr->left = null;
//			free(temp);
//		}
//	}else{
//		if(ptr->right!= null){
//			MirrorImageOfTree(ptr->right);
//			if(ptr->left != null){
//				int temp = ptr->right->value;
//				ptr->right->value = ptr->left->value;
//				ptr->left->value = temp;
//			}else{
//				ptr->left = new node(ptr->right->value);
//				temp = ptr->right;
//				ptr->right = null;
//				free(temp);
//			}
//		}else{
//			return;
//		}
//	}
//
//}

void MirrorImageOfTree(node *ptr){
	if(ptr == null){
		return;
	}else{
		node *temp;
		MirrorImageOfTree(ptr->left);
		MirrorImageOfTree(ptr->right);
		temp = ptr->left->value;
		ptr->left->value = ptr->right->value;
		ptr->right->value = ptr->left->value;
	}
}

//Tested
int NumberOfElementsInTree(node *ptr){
	if(ptr->left == null && ptr->right == null){
		return 0;
	}
	int leftSideNumberOfNodes=0,rightSideNumberOfNodes=0;
	if(ptr->left != null){
		leftSideNumberOfNodes = 1+NumberOfElementsInTree(ptr->left);
	}
	if(ptr->right != null){
		rightSideNumberOfNodes = 1+NumberOfElementsInTree(ptr->right);
	}
	return leftSideNumberOfNodes+rightSideNumberOfNodes;
}

//Tested
void PreOrderTraversal(node *ptr){
	printf("%d \t",ptr->value);
	if(ptr->left != null){
		PreOrderTraversal(ptr->left);
	}
	if(ptr->right != null){
		PreOrderTraversal(ptr->right);
	}
}

//Tested
void PostOrderTraversal(node *ptr){
	if(ptr->left != null){
		PostOrderTraversal(ptr->left);
	}
	if(ptr->right != null){
		PostOrderTraversal(ptr->right);
	}
	printf("%d \t",ptr->value);
}

//Tested
void InOrderTraversal(node *ptr){
	if(ptr->left != null){
		InOrderTraversal(ptr->left);
	}
	printf("%d \t",ptr->value);
	if(ptr->right != null){
		InOrderTraversal(ptr->right);
	}
}

//Tested
void PrintLevelOrderOfTree(node *ptr){
	queue<node *> levelOrderQueue;
	if(ptr != null){
		levelOrderQueue.push(ptr);
	}
	while(!levelOrderQueue.empty()){
		ptr = levelOrderQueue.front();
		levelOrderQueue.pop();
		printf("%d \t",ptr->value);
		if(ptr->left != null){
			levelOrderQueue.push(ptr->left);
		}
		if(ptr->right != null){
			levelOrderQueue.push(ptr->right);
		}
	}
}

//int HeightOfTree(node *ptr,int count){
//	int levelOfNode = count;
//	if(ptr->left!=null){
//		int height =  HeightOfTree(ptr->left,count+1);
//		if(levelOfNode > height){
//			return levelOfNode;
//		}
//	}
//	if(ptr->right != null){
//		int height= HeightOfTree(ptr->right,count+1);
//		if(levelOfNode > height){
//			return levelOfNode;
//		}
//	}
//	return levelOfNode;
//}


//To be tested
int HeightOfTree(node *ptr,int count){
	int levelOfNode = count;
	if(ptr->left!=null){
		return HeightOfTree(ptr->left,count+1);
	}
	if(ptr->right != null){
		return HeightOfTree(ptr->right,count+1);
	}
	if(ptr->left == null && ptr->right == null){
		if(maxHeight < levelOfNode){
			maxHeight = levelOfNode;
			return maxHeight;
		}
	}
	return 0;
}


void ConstructTreeFromPreOrderInOrder(){

}

void ConstructTreeFromPreOrder(){

}

void HeightBalancedTree(node *ptr){

}
