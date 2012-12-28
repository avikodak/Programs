/*
 * ConnectNodesInSameLevel.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<stack>
#define null NULL
using namespace std;

struct node{
	int number;
	struct node *left;
	struct node *right;
	struct node *next;
};

node *root = null;

void CreateLinkedListForNodesInSameLevel(stack<node *> nodesInSameLevel){

}

void ConnectNodesInSameLevel(){
	stack<node *> levelOrderOfTree;node *ptr;
	levelOrderOfTree.push(root);
	levelOrderOfTree.push(null);
	do{
		ptr = levelOrderOfTree.top();
		if(ptr != null){
			if(ptr->left != null){
				levelOrderOfTree.push(ptr->left);
			}
			if(ptr->right !=  null){
				levelOrderOfTree.push(ptr->left);
			}
		}else{
			// The nodes which are in the same level are in the stack
			// Now use the method connect nodes and connect them
		}
	}while(1);
}


