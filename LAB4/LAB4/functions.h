#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum bool
{
	false,
	true
} Bool; 

typedef struct nodeData
{
	double diskSize;
} NodeData;

typedef struct node
{
	NodeData data;
	struct node* pNext;
} Node;

Bool isEmpty(Node* pStack);
Bool push(Node** pStack, NodeData newData);
Bool pop(Node** pStack, NodeData* searchData);
Bool peek(Node* pStack, NodeData* peekData);
void printStack(Node* pStack, int pillarNum);


#endif