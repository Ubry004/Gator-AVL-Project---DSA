#include <iostream>
#include "AVLTree.h"

AVLTree::AVLTree()
{
}

AVLTree::~AVLTree()
{
}

// Private Helper functions for user functions

AVLTree::Node* AVLTree::HELPER_insert(Node* helpRoot, std::string name, int id)
{
    // Check to make sure the ID is 8 digits
    if (std::to_string(abs(id)).length() > 8 || id < 0) {
        std::cout << "unsuccessful" << std::endl;
        return helpRoot;
    }
    if (helpRoot == nullptr) {
        return new Node(name, id);
    }
    else if (id < helpRoot->ID) {
        helpRoot->l_child = HELPER_insert(helpRoot->l_child, name, id);
    }
    else {
        helpRoot->r_child = HELPER_insert(helpRoot->r_child, name, id);
    }

    //TODO: CHECK HEIGHT AND AUTO BALANCE

    return helpRoot;
}

void AVLTree::HELPER_remove(Node* helpRoot, int id)
{
    if (helpRoot == nullptr) {
        std::cout << "unsuccessful" << std::endl;
        return;
    }

    // Case 1: Node with given id has no children
    if (helpRoot->l_child != nullptr && helpRoot->l_child->ID == id) {
        if (helpRoot->l_child->l_child == nullptr && helpRoot->l_child->r_child == nullptr) {
            helpRoot->l_child = nullptr;
            return;
        }
    }
    else if (helpRoot->r_child != nullptr && helpRoot->r_child->ID == id) {
        if (helpRoot->r_child->l_child == nullptr && helpRoot->r_child->r_child == nullptr) {
            helpRoot->r_child = nullptr;
            return;
        }
    }
    else if (id < helpRoot->ID) {
        HELPER_remove(helpRoot->l_child, id);
    }
    else {
        HELPER_remove(helpRoot->r_child, id);
    }

    // Case 2: Node with given id has 1 child
    if (helpRoot->l_child != nullptr && helpRoot->l_child->ID == id) {
        if (helpRoot->l_child->l_child != nullptr) {
            helpRoot->l_child = helpRoot->l_child->l_child;
            return;
        }
        else if (helpRoot->l_child->r_child != nullptr) {
            helpRoot->l_child = helpRoot->l_child->r_child;
            return;
        }
    }
    else if (helpRoot->r_child != nullptr && helpRoot->r_child->ID == id) {
        if (helpRoot->r_child->l_child != nullptr) {
            helpRoot->r_child = helpRoot->r_child->l_child;
            return;
        }
        else if (helpRoot->r_child->r_child != nullptr) {
            helpRoot->r_child = helpRoot->r_child->r_child;
            return;
        }
    }
    else if (id < helpRoot->ID) {
        HELPER_remove(helpRoot->l_child, id);
    }
    else {
        HELPER_remove(helpRoot->r_child, id);
    }

    // Case 3: Node with given value as two children


}

void AVLTree::HELPER_searchID(int ID)
{
}

void AVLTree::HELPER_searchNAME(std::string NAME)
{
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

void AVLTree::HELPER_printLevelCount()
{

}

void AVLTree::HELPER_removeInorderN(int n)
{

}

// ---------------------------------------------------------------------------------

// Add a Student object into the tree with the specified name, NAME and GatorID number, ID
void AVLTree::insert(std::string NAME, int ID)
{
    // TODO: Add your implementation code here.
    this->root = HELPER_insert(root, NAME, ID);

}


void AVLTree::remove(int ID)
{
    // TODO: Add your implementation code here.
    HELPER_remove(root, ID);
}


// Search for the student with the specified ID from the tree.
void AVLTree::searchID(int ID)
{
    // TODO: Add your implementation code here.
}


// Search for the student with the specified name, NAME in the tree
void AVLTree::searchNAME(std::string NAME)
{
    // TODO: Add your implementation code here.
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
}


// Remove the Nth GatorID from the inorder traversal of the tree (N = 0 for the first item, etc)
void AVLTree::removeInorderN(int n)
{
    // TODO: Add your implementation code here.
}
