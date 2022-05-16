#include "functions.h"

Bool isEmpty(Node* pStack)
{
	Bool empty = false;
	if (pStack == NULL)
	{
		empty = true;
	}
	return empty;
}

Bool push(Node** pStack, NodeData newData)
{
	Node* pNew = NULL;
	Bool success = false;

	pNew = (Node*)malloc(sizeof(Node));

	if (!isEmpty(pNew))
	{
		pNew->data = newData;
		pNew->pNext = *pStack;
		*pStack = pNew;
		success = true;
	}

	return success;
}

Bool pop(Node** pStack, NodeData* searchData)
{
	Node* pTemp = NULL;
	Bool success = false;

	if (!isEmpty(*pStack))
	{
		pTemp = (*pStack)->pNext;
		*searchData = (*pStack)->data;
		free(*pStack);

		*pStack = pTemp;
		success = true;
	}

	return success;
}

Bool peek(Node* pStack, NodeData* peekData)
{
	Bool success = false;

	if (!isEmpty(pStack))
	{
		*peekData = pStack->data;
		success = true;
	}

	return success;
}

void printStack(Node* pStack, int pillarNum)
{
	printf("Pillar %d: ", pillarNum);
	while (!isEmpty(pStack))
	{
		printf("%.1lf", pStack->data.diskSize);
		if (pStack->pNext != NULL)
		{
			printf(" -> ");
		}
		pStack = pStack->pNext;
	}
	printf("\n");
}
