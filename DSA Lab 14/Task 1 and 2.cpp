#include"BST.h"
//All the funstions are in BST.h

int main()
{
	MyBST<int> b;
	b.insert(7);
	b.insert(6);
	b.insert(32);
	b.insert(75);
	b.insert(5);
	b.insert(2);
	b.insert(73);
	b.insert(4);
	cout << "================Tree===============" << endl;
	b.inorder();
	b.height();
	cout << "================ task 1 =============" << endl;
	int k, n;
	cout << "Enter the k: ";
	cin >> k;
	b.printKthSmallest(k);
	b.printKthLargest(k);
	cout << "Enter the n: ";
	cin >> n;
	b.printNSmallestValues(n);
	b.printNLargestValues(n);
	if (b.isBalanced())
	{
		cout << "The tree is balanced" << endl;
	}
	else
	{
		cout << "The tree is not balanced" << endl;
	}

	cout << "============== Task 2 ===============" << endl;
	int start, end;
	cout << "Enter the range to delete nodes (smaller value first the larger value): ";
	cin >> start >> end;
	b.removeInRange(start, end);
	cout << "The tree After deletion is" << endl;
	b.inorder();
	return 0;
}