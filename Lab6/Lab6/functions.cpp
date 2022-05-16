#include "header.h"



//void setNext(QueueNode* node)
//{
//	
//}

Bool QueueNode::isEmpty(Queue q)
{
	if (q.pHead != NULL)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
//
//
//QueueNode* getPrev()
//{
//	return pPrev;
//}

QueueNode* QueueNode::makeNode(char newData)
{
	QueueNode* pMem = NULL;
	pMem = (QueueNode*)malloc(sizeof(QueueNode));
	if (pMem != NULL)
	{
		pMem->data = newData;
		pMem->pNext = NULL;
	}
	// Otherwise no memory is available; could use else, but
	// it’s not necessary
	return pMem;
}

Bool QueueNode::enqueue(Queue *pQueue, char newData)
{	
	QueueNode* pMem = makeNode(newData);
	if (pMem != NULL)
	{
		if (isEmpty(*pQueue))
		{
			pQueue->pHead = pMem;
		}
		else
		{
			pQueue->pTail->pNext = pMem;
		}
		pQueue->pTail->pNext = pMem;
	}
	else
	{
		return FALSE;
	}
}


//void QueueNode::printQueueRecursive(QueueNode* pHead)
//{
//	if (pHead != NULL)
//	{
//		printf("% c ->\n", (pHead)->data);
//		pHead = (pHead)->pNext;
//		printQueueRecursive(pHead);
//	}
//	else
//	{
//		sttd:cout("NULL\n");
//	}
//}