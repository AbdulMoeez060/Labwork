#include"Task2.h"

HugeInteger::HugeInteger()
{
	cout << "This is a Default Constructor." << endl;
	for (int i = 0; i < 40; i++)
	{
		arr[i] = 0;
	}
}
HugeInteger::HugeInteger(const HugeInteger& obj)
{
	for (int i = 0; i < 40; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}
ostream& operator<<(ostream& out, const HugeInteger& obj)
{
	cout << "This is overloaded << operator." << endl;
	for (int i = 0; i < 40; i++)
	{
		out << obj.arr[i];
	}
	return out;
}
istream& operator>>(istream& in, HugeInteger& obj)
{
	cout << "This is overloaded >> operator." << endl;
	do
	{
		cout << "Enter a 40 digit number(if more only first forty will be read also if a digit is negative it will be considered 0): ";
		in.getline(obj.input, 41);
		if (strlen(obj.input)!=40)
		{
			cout << "The length of the number is less than 40 digits please try again:" << endl;
		}
	} while (strlen(obj.input)!=40);
	for (int i = 0; i < 40; i++)
	{
		if ((int(obj.input[i])-48) >= 0 && (int(obj.input[i]) - 48) <= 9)
		{
			obj.arr[i] = int(obj.input[i]) - 48;
		}
	}
	return in;
}
HugeInteger HugeInteger::operator+(const HugeInteger& obj)
{
	HugeInteger h;
 	for (int i = 39; i >= 0; i--)
	{
		h.arr[i] = h.arr[i] + (this->arr[i] + obj.arr[i]);
		if (h.arr[i]>9)
		{
			h.arr[i - 1] =h.arr[i-1]+(h.arr[i] / 10);
			h.arr[i] = h.arr[i] % 10;
		}
	}
	return h;
}
HugeInteger HugeInteger::operator-(const HugeInteger& obj)
{
	HugeInteger h;
	for (int i = 39; i >= 0; i--)
	{
		h.arr[i]= (this->arr[i] - obj.arr[i])+h.arr[i];
		if (h.arr[i]<0)
		{
			h.arr[i] =  this->arr[i] - h.arr[i];
			h.arr[i - 1] = h.arr[i - 1] - 1;
		}
	}
	return h;
}
bool HugeInteger::operator==(const HugeInteger& obj)
{
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] != obj.arr[i])
		{
			return 0;
		}
	}
	return 1;
}
bool HugeInteger::operator!=(const HugeInteger& obj)
{
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] != obj.arr[i])
		{
			return 1;
		}
	}
	return 0;
}
bool HugeInteger::operator<=(const HugeInteger& obj)
{
	int count = 0;
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] == obj.arr[i])
		{
			count++;
		}
	}
	if (count==40)
	{
		return 1;
	}
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i]>obj.arr[i])
		{
			return 0;
		}
	}
	return 1;
}
bool HugeInteger::operator>=(const HugeInteger& obj)
{
	int count = 0;
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] == obj.arr[i])
		{
			count++;
		}
	}
	if (count == 40)
	{
		return 1;
	}
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] < obj.arr[i])
		{
			return 0;
		}
	}
	return 1;
}
bool HugeInteger::operator<(const HugeInteger& obj)
{
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] > obj.arr[i])
		{
			return 0;
		}
	}
	return 1;
}
bool HugeInteger::operator>(const HugeInteger& obj)
{
	for (int i = 0; i < 40; i++)
	{
		if (this->arr[i] < obj.arr[i])
		{
			return 0;
		}
	}
	return 1;
}
HugeInteger& HugeInteger::operator++()
{
	/*for (int i = 0; i < 40; i++)
	{
		this->arr[i] = this->arr[i] + 1;
		if (this->arr[i]>9)
		{
			this->arr[i + 1] = this->arr[i + 1] + (this->arr[i] / 10);
			this->arr[i] = this->arr[i] % 10;
		}
	}*/
	this->arr[39]=this->arr[39] + 1;
	for (int i = 39; i >= 0; i--)
	{
		if (this->arr[i] > 9)
		{
			this->arr[i - 1] = this->arr[i - 1] + (this->arr[i] / 10);
			this->arr[i] = this->arr[i] % 10;
		}
	}
	return *this;
}
HugeInteger& HugeInteger::operator++(int)
{
	/*for (int i = 0; i < 40; i++)
	{
		this->arr[i] = this->arr[i] + 1;
		if (this->arr[i] > 9)
		{
			this->arr[i + 1] = this->arr[i + 1] + (this->arr[i] / 10);
			this->arr[i] = this->arr[i] % 10;
		}
	}*/
	this->arr[39]=this->arr[39] + 1;
	for (int i = 39; i >= 0; i--)
	{
		if (this->arr[i] > 9)
		{
			this->arr[i - 1] = this->arr[i - 1] + (this->arr[i] / 10);
			this->arr[i] = this->arr[i] % 10;
		}
	}
	return *this;
}
HugeInteger& HugeInteger::operator--()
{
	int temp = this->arr[39];
	this->arr[39]=this->arr[39] - 1;
	for (int i = 39; i >= 0; i--)
	{
		if (this->arr[i] < 0)
		{
			this->arr[i] = -this->arr[i] + temp;
			this->arr[i - 1] = this->arr[i - 1] - 1;
			temp = this->arr[i - 1];
		}
	}
	return *this;
}
HugeInteger& HugeInteger::operator--(int)
{
	int temp = this->arr[39];
	this->arr[39]=this->arr[39] - 1;
	for (int i = 39; i >= 0; i--)
	{
		if (this->arr[i] < 0)
		{
			this->arr[i] = -this->arr[i] + temp;
			this->arr[i - 1] = this->arr[i - 1] - 1;
			temp = this->arr[i - 1];
		}
	}
	return *this;
}
void HugeInteger::operator=(const HugeInteger& obj)
{
	for (int i = 0; i < 40; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}
HugeInteger HugeInteger::operator+=(const HugeInteger& obj)
{
	HugeInteger h;
	for (int i = 0; i < 40; i++)
	{
		h.arr[i] = obj.arr[i];
	}
	++h;
	return h;
}
int& HugeInteger::operator[](int index)
{
	return arr[index];
}
HugeInteger::~HugeInteger()
{
	cout << "This is a destructor" << endl;
}