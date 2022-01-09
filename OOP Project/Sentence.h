#pragma once
#include<iostream>
#include<fstream>
#include"Word.h"
using namespace std;

class Sentence
{
public:
	Word w[20];
	const int ssize;
	Sentence():ssize(20){}
	Sentence(int ss):ssize(ss){}
	Sentence(const Sentence& obj) :ssize(obj.ssize)
	{
		w[ssize];
		int ss = 0, ws = 0;//ss= sentence size means words in sentence ws = word size means letters in a word
		while (obj.w[ss].l[ws] != '\0')
		{
			w[ss].l[ws] = obj.w[ss].l[ws];
			ws++;
			if (w[ss].l[ws-1]==' ')
			{
				ws = 0;
				ss++;
			}
		}
		w[ss].l[ws] = '\0';
	}
	~Sentence(){}
};

