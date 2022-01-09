#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class Word
{
public:
	const int wsize;
	char l[30];
	Word() :wsize(30){}
	Word(int ws):wsize(ws)
	{
		l[wsize];
	}
	Word(const Word& obj):wsize(obj.wsize)
	{
		l[wsize];
		int ws = 0;
		while (obj.l[ws]!='\0')
		{
			l[ws] = obj.l[ws];
			ws++;
		}
		l[ws] = '\0';
	}
	~Word(){}
};

