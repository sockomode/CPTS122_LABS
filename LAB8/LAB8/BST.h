#pragma once

#include <iostream>
#include <string>
#include "BSTNode.h"

class BST
{
public:
	BST();

	BSTNode* getRoot() const;

	void setRoot(BSTNode* const newRoot);

	void insert(const string newData);
	void inOrderTraversal();
	void preOrderTraversal();

private:
	BSTNode* mpRoot;
	BSTNode* makeNode(const string newData);
	void insert(BSTNode*& pTree, const string newData);
	void inOrderTraversal(BSTNode* pTree);
	void preOrderTraversal(BSTNode* pTree);
};