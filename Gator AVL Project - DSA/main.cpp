#include <iostream>
#include "AVLTree.h"

/* Note: 
	1. You will have to comment main() when unit testing your code because catch uses its own main().
	2. You will submit this main.cpp file and any header files you have on Gradescope. 
*/

int main(){

	AVLTree AVL;

	AVL.insert("Hatsune Miku", 39393939);
	AVL.insert("Korone Inugami", 56356356);
	AVL.insert("Shinji Ikari", 00000001);
	AVL.insert("Kaworu Nagisa", 42631005);
	AVL.insert("Okayu Nekomata", 56356357);
	AVL.insert("Kagamine Rin", 39393940);

	AVL.insert("Greedy Grinner", 919282918929823);
	AVL.insert("Late Andy", -20348208);

	AVL.printInorder();

	AVL.remove(39393939);

	AVL.printInorder();

	return 0;
}

