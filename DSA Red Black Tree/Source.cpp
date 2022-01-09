#include"MyRBTree.h"

int main()
{
	MyRBTree<int> r;
	r.insertVal(10);
	r.insertVal(18);
	r.insertVal(7);
	r.insertVal(15);
	r.insertVal(16);
	r.insertVal(30);
	r.insertVal(25);
	r.insertVal(40);
	r.insertVal(60);
	r.insertVal(2);
	r.insertVal(1);
	r.insertVal(70);


	
	r.inorder();

	r.preorder();

	r.postorder();

}