/*
 * LinkedList.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<stdlib.h>
#define null NULL
struct node{
	int number;
	node *next;
};

node *lastPtr = null;
node *head = null;
node *reverseHead,*tempTraversal;
bool CONTINUE = true;

//Tested
void CreateLinkedList(int element){
	if(head == null){
		head = (node *)malloc(sizeof(node));
		head->number = element;
		head->next = null;
		lastPtr = head;
		tempTraversal = head;
	}else{
		lastPtr->next = (node *)malloc(sizeof(node));
		lastPtr->next->number = element;
		lastPtr->next->next = null;
		lastPtr = lastPtr->next;
	}

}

//Tested
void PrintLinkedList(){
	node *ptrForTraversal;
	ptrForTraversal = head;
	while(ptrForTraversal->next != null){
		printf("%d->",ptrForTraversal->number);
		ptrForTraversal = ptrForTraversal->next;
	}
	printf("%d->NULL",ptrForTraversal->number);
}


//Tested
node *ReverseLinkedList(node *ptrTraversal){
	if(ptrTraversal->next != null){
		ReverseLinkedList(ptrTraversal->next);
		ptrTraversal->next->next = ptrTraversal;
		return ptrTraversal;
	}else{
		//reverseHead = ptrTraversal;
		head = ptrTraversal;
		//		reverseHead->number = tempTraversal->number;
		//		tempTraversal = tempTraversal->next;
	}
	return null;
}

//Tested
int LengthLinkedList(){
	node *ptrTraversal = head;
	int countNode=0;
	while(ptrTraversal->next != null){
		countNode++;
		ptrTraversal = ptrTraversal->next;
	}
	return countNode+1;
}

//Tested
void SortLinkedListBubbleSort(){
	int lengthLinkedList = LengthLinkedList();
	printf("\nLength Of Linked List %d",lengthLinkedList);
	node *ptrTraversal = head;
	int temp;
	for(int outerCounter=0;outerCounter< lengthLinkedList;outerCounter++){
		while(ptrTraversal->next != null){
			if(ptrTraversal->number > ptrTraversal->next->number){
				temp = ptrTraversal->number;
				ptrTraversal->number = ptrTraversal->next->number;
				ptrTraversal->next->number = temp;
			}
			ptrTraversal = ptrTraversal->next;
		}
		ptrTraversal = head;
	}
}

void SortLinkedListInsertionSort(){
	node *sortedLinkedListHead = null,*lastPtr,*sortedListTraversal;
	node *traversalPtr = head;
	while(traversalPtr->next != null){
		if(sortedLinkedListHead == null){
			sortedLinkedListHead = (node *)malloc(sizeof(node));
			sortedLinkedListHead->number = traversalPtr->number;
			sortedLinkedListHead->next = null;
			lastPtr= sortedLinkedListHead;
		}else{
			sortedListTraversal = sortedLinkedListHead;
			// Complete Code
		}
	}
}

void SortLinkedListMergeSort(){

}

//Tested
void MiddleElementLinkedList(){
	node *slowPtr,*fastPtr;
	slowPtr =head;fastPtr = head;
	while(slowPtr->next != null && fastPtr->next != null){
		if(fastPtr->next->next != null){
			slowPtr = slowPtr->next;
			fastPtr = fastPtr->next->next;
		}else{
			break;
		}
	}
	printf("\nMiddle Element %d",slowPtr->number);
}

void ReturnNthNodePointerLinkedList(){

}

void InsertNodeIntoLinkedList(){

}

void DeleteNodeFromLinkedList(){

}

void DeleteLinkedList(){

}

void DetectLoop(){

}

void DeleteLoopFromLinkedList(){

}

//Tested
void PrintLinkedListInReverse(node *ptr){
	if(ptr->next != null){
		PrintLinkedListInReverse(ptr->next);
		printf("%d\t",ptr->number);
	}else{
		printf("%d\t",ptr->number);
	}

}

int main(){

	CreateLinkedList(5);
	CreateLinkedList(4);
	CreateLinkedList(3);
	CreateLinkedList(2);
	CreateLinkedList(1);
	CreateLinkedList(6);
	CreateLinkedList(7);
	CreateLinkedList(8);
	CreateLinkedList(9);
	CreateLinkedList(10);
	CreateLinkedList(11);

	PrintLinkedList();

	//printf("Length Of Linked List %d",LengthLinkedList());

	//node *trailingPtr = ReverseLinkedList(head);
	//trailingPtr->next = null;
	//PrintLinkedList();

	//SortLinkedListBubbleSort();

	//PrintLinkedList();

	printf("\n");

	//PrintLinkedListInReverse(head);
	MiddleElementLinkedList();

	return 1;
}


