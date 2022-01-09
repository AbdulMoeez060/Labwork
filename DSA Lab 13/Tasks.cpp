#include"BST.h"

int main()
{
	MyBST<int> b1;

	b1.insert(60);
	b1.insert(50);
	b1.insert(70);
	b1.insert(30);
	b1.insert(53);
	b1.insert(80);
	b1.insert(75);
	b1.insert(77);
	b1.insert(35);
	b1.insert(57);
	b1.insert(32);
	b1.insert(40);
	b1.insert(45);
	b1.insert(48);
	b1.display();
	b1.search(30);
	b1.search(80);
	b1.search(88);
	b1.display();
	b1.deleteNode(32);
	//b1.update(53, 54);
	b1.display();
	//b1.update(75, 80);
	b1.deleteNode(40);
	b1.display();
	//b1.update(70, 72);
	b1.deleteNode(50);
	b1.display();
	cout << "==========================Assignment task a========================" << endl;
	b1.Lowest_common_ancestor(32, 40);

	cout << "==========================Assignment task c========================" << endl;

	b1.printRootToLeaf();

	cout << "==========================Assignment task d========================" << endl;

	b1.printLeftView();
	cout << "==========================Assignment task e========================" << endl;

	b1.printRightView();
	cout << "==========================Assignment task b========================" << endl;

	cout << "Mirrored Tree:" << endl;
	b1.mirrorBST();
	b1.display();

	
	return 0;
}