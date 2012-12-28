/*
 * SplitCircularLinkedListIntoTwoHalves.cpp
 *
 *  Created on: Dec 12, 2012
 *      Author: AVINASH
 */

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define null NULL
using namespace std;

struct node{
	int element;
	node *next;
	node(int inputValue){
		element = inputValue;
		next = null;
	}
	node (int inputValue,node *ptr){
		element = inputValue;
		next = ptr;
	}
};

node *head;
node *tail;

void SplitCircularLinkedList();
void CreateCircularLinkedList(int userInput[]);

int main(){

}

void CreateCircularLinkedList(int userInput[]){
	int noOfElements = sizeof(userInput)/sizeof(int);
	for(int counter=0;counter < noOfElements-1; counter++){
		if(head == NULL){
			head = new node(userInput[counter]);
			tail = head;
		}else{
			tail->next = new node(userInput[counter]);
			tail = tail->next;
		}
	}
	tail->next = new node(userInput[noOfElements-1],head);  // Making the last element point to the head node
}

//Not considering  the boundary conditions like
// if head is null or second node is null
void SplitCircularLinkedList(){
	node *slowPointer,*fastPointer;
	slowPointer= head;
	fastPointer = head->next;
	while(fastPointer+2 != head && fastPointer+2 != head->next ){
		slowPointer++;
		fastPointer += 2;
	}

	node *headOfLinkedList = head;
	node *headOfSecondLinkedList = slowPointer+1;
	fastPointer->next= NULL;
	free(fastPointer);
	free(slowPointer);
}
