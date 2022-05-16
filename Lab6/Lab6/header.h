#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

class QueueNode 
{
private:
	std::string data;
	QueueNode* pNext;
	QueueNode* pPrev;

	Bool isEmpty(Queue q);
	QueueNode* makeNode(char newData);
	Bool enqueue(Queue* pQueue, char newData);
	void printQueueRecursive(QueueNode* pHead);

public:
	QueueNode(){}

};

class Queue
{
public:
	QueueNode* pHead;
	QueueNode* pTail;
};

typedef enum boolean
{
	FALSE, TRUE
}Bool;



#endif HEADER_H