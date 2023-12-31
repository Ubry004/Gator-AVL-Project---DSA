#include <iostream>
#include "AVLTree.h"

AVLTree::AVLTree()
{
}

AVLTree::~AVLTree()
{
}

// Private Helper functions for user functions

AVLTree::Node* AVLTree::HELPER_insert(Node* helpRoot, std::string name, std::string id)
{
    // Check to make sure the ID is 8 digits
    if (id.length() != 8) {
        std::cout << "unsuccessful" << std::endl;
        return helpRoot;
    }
    if (helpRoot == nullptr) {
        return new Node(name, id);
    }
    else if (id < helpRoot->ID) {
        helpRoot->l_child = HELPER_insert(helpRoot->l_child, name, id);
        std::cout << "successful" << std::endl;
    }
    else {
        helpRoot->r_child = HELPER_insert(helpRoot->r_child, name, id);
        std::cout << "successful" << std::endl;
    }

    return balance(helpRoot);   // Balance on the way out
}

AVLTree::Node* AVLTree::HELPER_remove(Node* helpRoot, std::string id)
{
    if (helpRoot == nullptr) {
        std::cout << "unsuccessful" << std::endl;
        return nullptr;
    }
    
    if (id < helpRoot->ID) {
        helpRoot->l_child = HELPER_remove(helpRoot->l_child, id);
    }
    else if (id > helpRoot->ID) {
        helpRoot->r_child = HELPER_remove(helpRoot->r_child, id);
    }
    else {
        // Case 1: No children
        if (helpRoot->l_child == nullptr && helpRoot->r_child == nullptr) {
            helpRoot = nullptr;
            return nullptr;
        }
        // Case 2: 1 child
        else if (helpRoot->l_child == nullptr || helpRoot->r_child == nullptr) {
            helpRoot = helpRoot->l_child ? helpRoot->l_child : helpRoot->r_child;
            return balance(helpRoot);
        }
        // Case 3: 2 children
        else {
            // Prioritize inorder successor
            // Find min value in right subtree
            AVLTree::Node* lc = helpRoot->l_child;
            AVLTree::Node* rc = helpRoot->r_child;
            delete helpRoot;
            if (rc == nullptr) return lc;
            AVLTree::Node* IOPredecessor = minval(rc);
            IOPredecessor->r_child = removeminval(rc);
            IOPredecessor->l_child = lc;
            return balance(IOPredecessor);
        }
    }

    if (helpRoot == nullptr) {
        std::cout << "somehow nullptr, quitting..." << std::endl;
        return nullptr;
    }
    return balance(helpRoot);   // Balance on the way out
}

bool AVLTree::HELPER_searchID(AVLTree::Node* helpRoot, std::string id)
{
    if (helpRoot == nullptr) {
        return false;
    }
    else if (helpRoot->ID == id) {
        std::cout << helpRoot->NAME << std::endl;
        return true;
    } 
    else {
        if (helpRoot->l_child != nullptr) HELPER_searchID(helpRoot->l_child, id);
        if (helpRoot->r_child != nullptr) HELPER_searchID(helpRoot->r_child, id);
    }
}

bool AVLTree::HELPER_searchNAME(AVLTree::Node* helpRoot, std::string name)
{
    if (helpRoot == nullptr) {
        return false;
    }
    else if (helpRoot->NAME == name) {
        std::cout << helpRoot->ID << std::endl;
        return true;
    }
    else {
        if (helpRoot->l_child != nullptr) HELPER_searchNAME(helpRoot->l_child, name);
        if (helpRoot->r_child != nullptr) HELPER_searchNAME(helpRoot->r_child, name);
    }
}

void AVLTree::HELPER_printInorder(AVLTree::Node* helpRoot)
{
    if (helpRoot == nullptr)
        std::cout << "unsuccessful";
    else
    {
        if (helpRoot->l_child != nullptr) HELPER_printInorder(helpRoot->l_child);
        std::cout << helpRoot->NAME << " " << helpRoot->ID << std::endl;
        if (helpRoot->r_child != nullptr) HELPER_printInorder(helpRoot->r_child);
    }
}

void AVLTree::HELPER_printPreorder(AVLTree::Node* helpRoot)
{
    if (helpRoot == nullptr)
        std::cout << "unsuccessful";
    else
    {
        std::cout << helpRoot->NAME << " " << helpRoot->ID << std::endl;
        if (helpRoot->l_child != nullptr) HELPER_printPreorder(helpRoot->l_child);
        if (helpRoot->r_child != nullptr) HELPER_printPreorder(helpRoot->r_child);
    }
}

void AVLTree::HELPER_printPostorder(AVLTree::Node* helpRoot)
{
    if (helpRoot == nullptr)
        std::cout << "unsuccessful";
    else
    {
        if (helpRoot->l_child != nullptr) HELPER_printPostorder(helpRoot->l_child);
        if (helpRoot->r_child != nullptr) HELPER_printPostorder(helpRoot->r_child);
        std::cout << helpRoot->NAME << " " << helpRoot->ID << std::endl;
    }
}

void AVLTree::HELPER_printLevelCount(AVLTree::Node* helpRoot)
{
    if (helpRoot == nullptr) {
        std::cout << "0" << std::endl;
    }
    else {
        std::cout << (height(helpRoot->l_child) > height(helpRoot->r_child) ? height(helpRoot->l_child) : height(helpRoot->r_child)) + 1 << std::endl;
    }

}

int counter = 0;
void AVLTree::HELPER_removeInorderN(Node* helpRoot, int n)
{
    if (helpRoot == nullptr || counter > n) return;

    HELPER_removeInorderN(helpRoot->l_child, n);
    counter++;
    if (counter == n) {
        std::cout << "\nNth Node: " << helpRoot->NAME << std::endl;
        remove(helpRoot->ID);
        return;
    }
    HELPER_removeInorderN(helpRoot->r_child, n);

    return;
}

// ---------------------------------------------------------------------------------

// Add a Student object into the tree with the specified name, NAME and GatorID number, ID
void AVLTree::insert(std::string NAME, std::string ID)
{
    // TODO: Add your implementation code here.
    this->root = HELPER_insert(root, NAME, ID);

}


void AVLTree::remove(std::string ID)
{
    // TODO: Add your implementation code here.
    HELPER_remove(root, ID);
}


// Search for the student with the specified ID from the tree.
void AVLTree::searchID(std::string ID)
{
    // TODO: Add your implementation code here.
    if (HELPER_searchID(root, ID) == false) {
        std::cout << "unsuccessful" << std::endl;
    }
}

// Search for the student with the specified name, NAME in the tree
void AVLTree::searchNAME(std::string NAME)
{
    // TODO: Add your implementation code here.
    if (HELPER_searchNAME(root, NAME) == false) {
        std::cout << "unsuccessful" << std::endl;
    }
}

// Print out a comma separated inorder traversal of the names in the tree
void AVLTree::printInorder()
{
    // TODO: Add your implementation code here.
    HELPER_printInorder(root);
}


// Print out a comma separated preorder traversal of the names in the tree
void AVLTree::printPreorder()
{
    // TODO: Add your implementation code here.
    HELPER_printPreorder(root);
}


// Print out a comma separated postorder traversal of the names in the tree
void AVLTree::printPostorder()
{
    // TODO: Add your implementation code here.
    HELPER_printPostorder(root);
}


// Prints the number of levels that exist in the tree
void AVLTree::printLevelCount()
{
    // TODO: Add your implementation code here.
    HELPER_printLevelCount(root);
}


// Remove the Nth GatorID from the inorder traversal of the tree (N = 0 for the first item, etc)
void AVLTree::removeInorderN(int n)
{
    // TODO: Add your implementation code here.
    HELPER_removeInorderN(root, n);
}
