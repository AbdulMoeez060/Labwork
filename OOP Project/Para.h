#pragma once
#include<iostream>
#include<fstream>
#include"Sentence.h"
using namespace std;
class Para
{
public:
	Sentence s[15];
	const int psize;
	Para() :psize(15) {}
	Para(int ps) :psize(ps) { s[psize]; }
	Para(const Para& obj) :psize(obj.psize)
	{
		s[psize];
		int ps=0,ss = 0, ws = 0;//ps =sentences in a para,ss= sentence size means words in sentence ws = word size means letters in a word
		while (obj.s[ps].w[ss].l[ws] != '\0')
		{
			s[ps].w[ss].l[ws] = obj.s[ps].w[ss].l[ws];
			ws++;
			if (s[ps].w[ss].l[ws-1] == ' ')
			{
				ws = 0;
				ss++;
			}
			else if (s[ps].w[ss].l[ws-1] == '.')
			{
				ws = 0;
				ss=0;
				ps++;
			}
		}
		s[ps].w[ss].l[ws] = '\0';
	}
	~Para(){}
};

