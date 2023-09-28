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
		Node(std::string name, int id) { NAME = name; ID = id; };
		//TODO: swap uint with string for ID storage
		unsigned int ID;
		std::string NAME;
		unsigned int height;
		Node* r_child = nullptr;
		Node* l_child = nullptr;
	};

	Node* root = nullptr;

	// Add a Student object into the tree with the specified name, NAME and GatorID number, ID
	Node* HELPER_insert(Node* helpRoot, std::string name, int id);
	// Find and remove the account with the specified ID from the tree
	void HELPER_remove(Node* helpRoot, int ID);
	// Search for the student with the specified ID from the tree.
	void HELPER_searchID(int ID);
	// Search for the student with the specified name, NAME in the tree
	void HELPER_searchNAME(std::string NAME);
	// Print out a comma separated inorder traversal of the names in the tree
	void HELPER_printInorder(Node* helpRoot);
	// Print out a comma separated preorder traversal of the names in the tree
	void HELPER_printPreorder();
	// Print out a comma separated postorder traversal of the names in the tree
	void HELPER_printPostorder();
	// Prints the number of levels that exist in the tree
	void HELPER_printLevelCount();
	// Remove the Nth GatorID from the inorder traversal of the tree (N = 0 for the first item, etc)
	void HELPER_removeInorderN(int n);

public:

	AVLTree();
	~AVLTree();

	// Add a Student object into the tree with the specified name, NAME and GatorID number, ID
	void insert(std::string name, int id);
	// Find and remove the account with the specified ID from the tree
	void remove(int ID);
	// Search for the student with the specified ID from the tree.
	void searchID(int ID);
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

