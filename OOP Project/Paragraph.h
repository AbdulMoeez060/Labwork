#pragma once
#include<iostream>
#include<fstream>
using namespace std;


class Paragraph
{
private:
    const int p=0, s=0, w=0, l=0;
    char pa[10][10][20][50];
public:
    Paragraph();
    Paragraph(int pa, int se, int wo, int le);
    Paragraph(const Paragraph& obj);
    ~Paragraph();
    friend ostream& operator<<(ostream & out, const Paragraph & para);
    friend istream& operator>>(istream & in, Paragraph & para);
    void operator=(Paragraph& obj);
    void operator +();
    void operator -();
    bool operator!=(Paragraph& obj);
    bool operator==(Paragraph& obj);
    void countletters();
    void countwords();
    void countsentences();
    void countparagraphs();
};

