#include"Numbers.h"

Numbers::Numbers()
{
	no = 0;
	elements = NULL;
}
Numbers::Numbers(int n, float *&p)
{
	no = n;
    elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		elements[i] = p[i];
	}
}
Numbers::Numbers(const Numbers& obj)
{
	no = obj.no;
	elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		this->elements[i] = obj.elements[i] ;
	}
}
void Numbers::print() const
{
	cout << "Numbers no " << no << " elements{ ";
	for (int i = 0; i < no; i++)
	{
		cout << elements[i];
	}
	cout << "}" << endl;
}
float& Numbers::operator[](int index)
{
	if (index>no)
	{
		cout << "Wrong index so returning index 0";
		return elements[0];
	}
	return elements[index];
}
void Numbers::operator=(const Numbers& obj)
{
	no = obj.no;
	elements = NULL;
	elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		this->elements[i] = obj.elements[i];
	}
}
Numbers Numbers::operator+(const Numbers& obj)
{
	Numbers n;
	if (this->no==obj.no)
	{
		n.no = this->no;
		n.elements = new float[no];
		for (int i = 0; i < no; i++)
		{
			n.elements[i] = this->elements[i] + obj.elements[i];
		}
	}
	return n;
	
}
Numbers Numbers::operator++()
{
	Numbers n;
	n.no = no;
	n.elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		n.elements[i] = elements[i] + 1;
	}
	return n;
}
Numbers Numbers::operator--()
{
	Numbers n;
	n.no = no;
	n.elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		n.elements[i] = elements[i] - 1;
	}
	return n;
}
Numbers Numbers::operator++(int)
{
	Numbers n;
	n.no = no;
	n.elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		n.elements[i] = elements[i] + 1;
	}
	return n;
}
Numbers Numbers::operator--(int)
{
	Numbers n;
	n.no = no;
	n.elements = new float[no];
	for (int i = 0; i < no; i++)
	{
		n.elements[i] = elements[i] - 1;
	}
	return n;
}
bool Numbers::operator==(const Numbers& obj)
{
	if (no!=obj.no)
	{
		return 0;
	}
	else if (no == obj.no)
	{
		return 1;
	}
}
