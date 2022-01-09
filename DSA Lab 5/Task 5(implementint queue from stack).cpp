#include"Stack.h"

template<class T>
class Queue
{
private:
	Stack<T> s1;
	Stack<T> s2;
public:
	void enqueue(T val)
	{
		cout << "Adding " << val << " to queue." << endl;
		s1.push(val);

	}
	T dequeue()
	{
		if (s1.empty()&& s2.empty())
		{
			cout << "Queue is empty.";
			return 0;
		}
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.pop());
			}
		}
		T x = s2.pop();
		while (!s2.empty())
		{
			s1.push(s2.pop());
		}
		cout << "Removing " << x << " from queue." << endl;
		return x;
	}
	void display()
	{
		if (s1.empty() && s2.empty())
		{
			cout << "Queue is empty.";
		}
		
		s1.display();
	}
};
int main()
{
	cout << "============Int=============" << endl;
	Queue<int> q1;
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(8);
	q1.enqueue(1);
	q1.display();
	q1.dequeue();
	q1.dequeue();
	q1.display();
	q1.enqueue(9);
	q1.enqueue(0);
	q1.display();
	cout << "============Char=============" << endl;
	Queue<char> q2;
	q2.enqueue('f');
	q2.enqueue('u');
	q2.enqueue('l');
	q2.enqueue('l');
	q2.display();
	q2.dequeue();
	q2.dequeue();
	q2.display();
	q2.enqueue('a');
	q2.enqueue('l');
	q2.display();
	return 0;

}