#include <iostream>
#include "AVLTree.h"

/* Note: 
	1. You will have to comment main() when unit testing your code because catch uses its own main().
	2. You will submit this main.cpp file and any header files you have on Gradescope. 
*/

int main(){

	AVLTree AVL;

	std::cout << "Filling AVL tree... " << std::endl;
	AVL.insert("Mario", "12345678");
	AVL.insert("Luigi", "23456789");
	AVL.insert("Link", "34567890");
	AVL.insert("Zelda", "45678901");
	AVL.insert("Samus", "56789012");
	AVL.insert("Donkey Kong", "67890123");
	AVL.insert("Yoshi", "78901234");
	AVL.insert("Kirby", "89012345");
	AVL.insert("Sonic", "90123456");
	AVL.insert("Mega Man", "10234567");
	AVL.insert("Pac-Man", "11234567");
	AVL.insert("Solid Snake", "12234567");
	AVL.insert("Master Chief", "13234567");
	AVL.insert("Kratos", "14234567");
	AVL.insert("Geralt", "15234567");
	AVL.insert("Nathan Drake", "16234567");
	AVL.insert("Lara Croft", "17234567");
	AVL.insert("Gordon Freeman", "18234567");
	AVL.insert("Aloy", "19234567");
	AVL.insert("Ellie", "20234567");
	AVL.insert("Cloud Strife", "21234567");
	AVL.insert("Sephiroth", "22234567");
	AVL.insert("Tifa Lockhart", "23234567");
	AVL.insert("Leon Kennedy", "24234567");
	AVL.insert("Clementine", "25234567");
	AVL.insert("Joel Miller", "26234567");
	AVL.insert("Ezio Auditore", "27234567");
	AVL.insert("Altair Ibn-La'Ahad", "28234567");
	AVL.insert("Doom Slayer", "29234567");
	AVL.insert("Niko Bellic", "30234567");
	AVL.insert("CJ", "31234567");
	AVL.insert("Trevor Philips", "32234567");
	AVL.insert("Nathan Hale", "33234567");
	AVL.insert("Sackboy", "34234567");
	AVL.insert("Kratos (God of War)", "35234567");
	AVL.insert("Nathan Drake (Uncharted)", "36234567");
	AVL.insert("Lara Croft (Tomb Raider)", "37234567");
	AVL.insert("Kratos (Mortal Kombat)", "38234567");
	AVL.insert("Chell", "39234567");
	AVL.insert("Commander Shepard", "40234567");
	AVL.insert("Garrus Vakarian", "41234567");
	AVL.insert("Tali'Zorah", "42234567");
	AVL.insert("Liara T'Soni", "43234567");
	AVL.insert("Dante", "44234567");
	AVL.insert("Kratos (Smite)", "45234567");
	AVL.insert("Link (The Legend of Zelda)", "46234567");
	AVL.insert("Zelda (The Legend of Zelda)", "47234567");
	AVL.insert("Ganondorf", "48234567");
	AVL.insert("Ryu", "49234567");
	AVL.insert("Ken Masters", "50234567");
	AVL.insert("Chun-Li", "51234567");
	AVL.insert("M. Bison", "52234567");
	AVL.insert("Sakura", "53234567");
	AVL.insert("Terry Bogard", "54234567");
	AVL.insert("Morrigan Aensland", "55234567");
	AVL.insert("Doom Guy", "56234567");
	AVL.insert("Isaac Clarke", "57234567");
	AVL.insert("Pikachu", "58234567");
	AVL.insert("Charizard", "59234567");
	AVL.insert("Squirtle", "60234567");
	AVL.insert("Mewtwo", "61234567");
	AVL.insert("Link (Super Smash Bros.)", "62234567");
	AVL.insert("Mario (Super Smash Bros.)", "63234567");
	AVL.insert("Samus (Super Smash Bros.)", "64234567");
	AVL.insert("Donkey Kong (Super Smash Bros.)", "65234567");
	AVL.insert("Yoshi (Super Smash Bros.)", "66234567");
	AVL.insert("Kirby (Super Smash Bros.)", "67234567");
	AVL.insert("Pikachu (Super Smash Bros.)", "68234567");
	AVL.insert("Luigi", "69234567");
	AVL.insert("Fox McCloud", "70234567");
	AVL.insert("Falco Lombardi", "71234567");
	AVL.insert("Peach", "72234567");
	AVL.insert("Bowser", "73234567");
	AVL.insert("Toad", "74234567");
	AVL.insert("Rosalina", "75234567");
	AVL.insert("Captain Falcon", "76234567");
	AVL.insert("Marth", "77234567");
	AVL.insert("Roy", "78234567");
	AVL.insert("Ike", "79234567");
	AVL.insert("Pit", "80234567");
	AVL.insert("Dark Pit", "81234567");
	AVL.insert("Wario", "82234567");
	AVL.insert("Little Mac", "83234567");
	AVL.insert("Shulk", "84234567");
	AVL.insert("Duck Hunt", "85234567");
	AVL.insert("Ryu (SAVLt Fighter)", "86234567");
	AVL.insert("Ken Masters (SAVLt Fighter)", "87234567");
	AVL.insert("Chun-Li (SAVLt Fighter)", "88234567");
	AVL.insert("M. Bison (SAVLt Fighter)", "89234567");
	AVL.insert("Sakura (SAVLt Fighter)", "90234567");
	AVL.insert("Terry Bogard (SAVLt Fighter)", "91234567");
	AVL.insert("Morrigan Aensland (SAVLt Fighter)", "92234567");
	AVL.insert("Doom Guy (SAVLt Fighter)", "93234567");
	AVL.insert("Isaac Clarke (SAVLt Fighter)", "94234567");
	AVL.insert("Pikachu (SAVLt Fighter)", "95234567");
	AVL.insert("Charizard (SAVLt Fighter)", "96234567");
	AVL.insert("Squirtle (SAVLt Fighter)", "97234567");
	AVL.insert("Mewtwo (SAVLt Fighter)", "98234567");
	AVL.insert("Link (SAVLt Fighter)", "99234567");
	AVL.insert("Luigi", "00101011");

	//AVL.insert("Hatsune Miku", 39393939);
	//AVL.insert("Korone Inugami", 56356356);
	//AVL.insert("Shinji Ikari", 00000001);
	//AVL.insert("Kaworu Nagisa", 00000002);
	//AVL.insert("Okayu Nekomata", 56356357);
	//AVL.insert("Kagamine Rin", 39393940);

	std::cout << std::endl;

	std::cout << "Attempting to add invalid students... " << std::endl;
	AVL.insert("Greedy Grinner", "919282918929823");
	AVL.insert("Late Andy", "-20348208");

	std::cout << "\nInorder: " <<  std::endl;
	AVL.printInorder();
	//std::cout << "\nPreorder: " << std::endl;
	//AVL.printPreorder();
	//std::cout << "\nPostorder: " << std::endl;
	//AVL.printPostorder();

	std::cout << "\nTifa ID:" << std::endl;
	AVL.searchID("23234567");
	std::cout << "Luigi NAME:" << std::endl;
	AVL.searchNAME("Luigi");
	std::cout << "Kefka:" << std::endl;
	AVL.searchNAME("Kefka Palooza");

	//Inorder Removal
	//AVL.removeInorderN(0);

	//Currently throwing an exception because l_child is nullptr
	std::cout << "\nRemoving Link, Cloud, Tifa, and Samus... " << std::endl;
	AVL.remove("34567890");
	AVL.remove("21234567");
	AVL.remove("23234567");
	AVL.remove("56789012");

	std::cout << "\nInorder: " << std::endl;
	AVL.printInorder();
	/*std::cout << "\nPreorder: " << std::endl;
	AVL.printPreorder();
	std::cout << "\nPostorder: " << std::endl; 
	AVL.printPostorder();*/

	return 0;
}

