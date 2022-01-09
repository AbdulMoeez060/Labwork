#include"MyList.h"

template<class T>
void showList(MyList<T> s)
{
	cout << "List: " << endl;
	for (int i = s.rear(); i < s.size(); i++)
	{
		cout << "List[" << i << "]: ";
		cout << s[i] << endl;
	}
}
int main()
{
	cout << "============Integers List============" << endl;
	MyList<int> obj(5);
	obj.removeElement();//full() and empty() methods are used in add and remove element and size() is used in full()
	//so all the methods are used in this program
	obj.addElement(3);
	obj.addElement(5);
	obj.addElement(2);
	obj.addElement(8);
	obj.addElement(6);
	obj.addElement(8);
	//showList(obj);
	obj.display();
	obj.removeElement();
	obj.addElement(8);
	
	showList(obj);
	obj.insertAtStart(6);
	obj.removeFromStart();
	showList(obj);
	obj.insertAtStart(6);
	showList(obj);
	cout << "============Char List============" << endl;
	MyList<char> obj2(5);
	obj2.removeElement();
	obj2.addElement('h');
	obj2.addElement('e');
	obj2.addElement('l');
	obj2.addElement('l');
	obj2.addElement('o');
	obj2.addElement('y');
	showList(obj2);
	obj2.removeElement();
	obj2.addElement('y');
	showList(obj2);
	cout << "============Double List============" << endl;
	MyList<double> obj3(5);
	obj3.removeElement();
	obj3.addElement(3.42);
	obj3.addElement(5.53);
	obj3.addElement(2.96);
	obj3.addElement(8.2);
	obj3.addElement(6.5235);
	obj3.addElement(85.635);
	showList(obj3);
	obj3.removeElement();
	obj3.addElement(85.53);

	showList(obj3);
	
	return 0;
}