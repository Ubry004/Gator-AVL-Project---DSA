#include <iostream>
#include "AVLTree.h"

/* Note: 
	1. You will have to comment main() when unit testing your code because catch uses its own main().
	2. You will submit this main.cpp file and any header files you have on Gradescope. 
*/

int main(){

	AVLTree AVL;

	std::cout << "Filling AVL Tree... " << std::endl;
	AVL.insert("Hatsune Miku", 39393939);
	AVL.insert("Korone Inugami", 56356356);
	AVL.insert("Shinji Ikari", 00000001);
	AVL.insert("Kaworu Nagisa", 00000002);
	AVL.insert("Okayu Nekomata", 56356357);
	AVL.insert("Kagamine Rin", 39393940);

	std::cout << std::endl;

	std::cout << "Attempting to add invalid students... " << std::endl;
	AVL.insert("Greedy Grinner", 919282918929823);
	AVL.insert("Late Andy", -20348208);

	std::cout << "\nInorder: " <<  std::endl;
	AVL.printInorder();
	std::cout << "\nPreorder: " << std::endl;
	AVL.printPreorder();
	std::cout << "\nPostorder: " << std::endl;
	AVL.printPostorder();

	//Currently throwing an exception because l_child is nullptr
	std::cout << "\nRemoving Kaworu... " << std::endl;
	AVL.remove(00000002);

	std::cout << "\nInorder: " << std::endl;
	AVL.printInorder();
	std::cout << "\nPreorder: " << std::endl;
	AVL.printPreorder();
	std::cout << "\nPostorder: " << std::endl; 
	AVL.printPostorder();

	return 0;
}

