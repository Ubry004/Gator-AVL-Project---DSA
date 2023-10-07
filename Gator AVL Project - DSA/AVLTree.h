#pragma once

#include <string>

/*
    Meet the requirements for a Binary Search Tree (BST)
    Be sorted by numerical GatorID, not lexical Name
    Be sorted from least to greatest (nodes of lesser value are in the left subtree, nodes of greater value are in the right subtree)
    Make appropriate use of public and private methods
*/

class AVLTree
{
private:

	struct Node {
		Node(std::string name, std::string id) { NAME = name; ID = id; };
		std::string ID;
		std::string NAME;
		int height;
		Node* r_child = nullptr;
		Node* l_child = nullptr;
	};

	Node* root = nullptr;

	// Height and balance related functions

	int height(Node* node) {
		return node ? node->height : 0;	// returns 0 at a null leaf
	}

	int balanceFactor(Node* node){
		return height(node->r_child) - height(node->l_child);
	}

	void updateHeight(Node* node) {
		int hl = height(node->l_child);
		int hr = height(node->r_child);
		node->height = (hl > hr ? hl : hr) + 1;	// largest height among children + 1
	}

	Node* minval(Node* node) {
		return node->l_child ? minval(node->l_child) : node;	//runs until it hits a nullptr
	}

	Node* removeminval(Node* node) // deleting the node with the minimal key from p tree 
	{
		if (node->l_child == nullptr)
			return node->r_child;
		node->l_child= removeminval(node->l_child);
		return balance(node);
	}

	// Rotations

	Node* rotateright (Node* parent) {
		Node* lc = parent->l_child;
		parent->l_child = lc->r_child;
		lc->r_child = parent;
		updateHeight(parent);
		updateHeight(lc);
		return lc;
	}
	Node* rotateleft(Node* parent) {
		Node* rc = parent->r_child;
		parent->r_child = rc->l_child;
		rc->l_child = parent;
		updateHeight(parent);
		updateHeight(rc);
		return rc;
	}

	// Balancing function
	Node* balance(Node* node) {
		updateHeight(node);
		if (balanceFactor(node) == 2)
		{
			if (balanceFactor(node->r_child) < 0)
				node->r_child = rotateright(node->r_child); // right-left rotation
			return rotateleft(node);						// left rotation
		}
		if (balanceFactor(node) == -2)
		{
			if (balanceFactor(node->l_child) > 0)
				node->l_child = rotateleft(node->l_child);	// left-right rotation
			return rotateright(node);						// right rotation
		}
		return node; // already balanced
	}


	// Add a Student object into the tree with the specified name, NAME and GatorID number, ID
	Node* HELPER_insert(Node* helpRoot, std::string name, std::string id);
	// Find and remove the account with the specified ID from the tree
	Node* HELPER_remove(Node* helpRoot, std::string ID);
	// Search for the student with the specified ID from the tree.
	void HELPER_searchID(Node* helpRoot, std::string ID);
	// Search for the student with the specified name, NAME in the tree
	void HELPER_searchNAME(Node* helpRoot, std::string NAME);
	// Print out a comma separated inorder traversal of the names in the tree
	void HELPER_printInorder(Node* helpRoot);
	// Print out a comma separated preorder traversal of the names in the tree
	void HELPER_printPreorder(Node* helpRoot);
	// Print out a comma separated postorder traversal of the names in the tree
	void HELPER_printPostorder(Node* helpRoot);
	// Prints the number of levels that exist in the tree
	void HELPER_printLevelCount();
	// Remove the Nth GatorID from the inorder traversal of the tree (N = 0 for the first item, etc)
	void HELPER_removeInorderN(Node* helpRoot, int n);

public:

	AVLTree();
	~AVLTree();

	// Add a Student object into the tree with the specified name, NAME and GatorID number, ID
	void insert(std::string name, std::string id);
	// Find and remove the account with the specified ID from the tree
	void remove(std::string ID);
	// Search for the student with the specified ID from the tree.
	void searchID(std::string ID);
	// Search for the student with the specified name, NAME in the tree
	void searchNAME(std::string NAME);
	// Print out a comma separated inorder traversal of the names in the tree
	void printInorder();
	// Print out a comma separated preorder traversal of the names in the tree
	void printPreorder();
	// Print out a comma separated postorder traversal of the names in the tree
	void printPostorder();
	// Prints the number of levels that exist in the tree
	void printLevelCount();
	// Remove the Nth GatorID from the inorder traversal of the tree (N = 0 for the first item, etc)
	void removeInorderN(int n);

};

