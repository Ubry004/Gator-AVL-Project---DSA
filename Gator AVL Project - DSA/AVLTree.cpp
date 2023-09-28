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
        std::cout << "unsuccessful insertion of " << name << " " << id << std::endl;
        return helpRoot;
    }
    if (helpRoot == nullptr)
        return new Node(name, id);
    else if (id < helpRoot->ID)
        helpRoot->l_child = HELPER_insert(helpRoot->l_child, name, id);
    else
        helpRoot->r_child = HELPER_insert(helpRoot->r_child, name, id);

    //TODO: CHECK HEIGHT AND AUTO BALANCE

    return helpRoot;
}

void AVLTree::HELPER_remove(Node* helpRoot, int id)
{
    // Check to make sure the ID is 8 digits
    if (std::to_string(abs(id)).length() > 8 || id < 0) {
        std::cout << "unsuccessful deletion of " << id << std::endl;
    }

    if (helpRoot->ID == id) {
        //TODO: correctly define deletion 
        std::cout << "removed " << helpRoot->NAME << std::endl;
        helpRoot = nullptr;
    }
    else if (helpRoot == nullptr)
        std::cout << "The tree is empty!" << std::endl;
    else if (id < helpRoot->ID)
        HELPER_remove(helpRoot->l_child, id);
    else
        HELPER_remove(helpRoot->r_child, id);
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
        std::cout << "Sorry, nothing.";
    else
    {
        if (helpRoot->l_child != nullptr) HELPER_printInorder(helpRoot->l_child);
        std::cout << helpRoot->NAME << " " << helpRoot->ID << std::endl;
        if (helpRoot->r_child != nullptr) HELPER_printInorder(helpRoot->r_child);
    }
}

void AVLTree::HELPER_printPreorder()
{
}

void AVLTree::HELPER_printPostorder()
{
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
}


// Print out a comma separated postorder traversal of the names in the tree
void AVLTree::printPostorder()
{
    // TODO: Add your implementation code here.
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
