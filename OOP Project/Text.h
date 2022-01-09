#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include"Para.h"
using namespace std;
class Text
{
private:
	Para p[10];
	const int tsize;
public:
	Text():tsize(10){}
	Text(int ts) :tsize(ts) { p[tsize]; }
	Text(const Text& obj):tsize(obj.tsize)
	{
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (obj.p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            p[ps].s[ss].w[ws].l[ls] = obj.p[ps].s[ss].w[ws].l[ls];
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        p[ps].s[ss].w[ws].l[ls] = '\0';
	}
	~Text(){}
	friend ostream& operator<<(ostream& out, const Text& t);
	friend istream& operator>>(istream& in, Text& t);
    void operator=(Text& obj)
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (obj.p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            p[ps].s[ss].w[ws].l[ls] = obj.p[ps].s[ss].w[ws].l[ls];
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        p[ps].s[ss].w[ws].l[ls] = '\0';
    }
    Text operator +(const Text& obj)
    {
        Text temp;
        vector<char> copy;
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            copy.push_back(p[ps].s[ss].w[ws].l[ls]);
            
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        ps = 0, ss = 0, ws = 0, ls = 0;
        while (obj.p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            copy.push_back(obj.p[ps].s[ss].w[ws].l[ls]);
            ls++;
            if (obj.p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (obj.p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (obj.p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        copy.push_back('\0');
        ps = 0, ss = 0, ws = 0, ls = 0;
        int i = 0;
        while (copy[i] != '\0')
        {
            temp.p[ps].s[ss].w[ws].l[ls] = copy[i];
            i++;
            ls++;
            if (temp.p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (temp.p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (temp.p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        temp.p[ps].s[ss].w[ws].l[ls] = '\0';
        return temp;
    }
    void operator +()
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if (p[ps].s[ss].w[ws].l[ls] >= 97 && p[ps].s[ss].w[ws].l[ls] <= 122)
            {
                p[ps].s[ss].w[ws].l[ls] = p[ps].s[ss].w[ws].l[ls] - 32;
            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    void operator -()
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if (p[ps].s[ss].w[ws].l[ls] >= 65 && p[ps].s[ss].w[ws].l[ls] <= 90)
            {
                p[ps].s[ss].w[ws].l[ls] = p[ps].s[ss].w[ws].l[ls] + 32;
            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    void operator%(int key)
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if ((p[ps].s[ss].w[ws].l[ls] >= 65 && p[ps].s[ss].w[ws].l[ls] <= 90)||(p[ps].s[ss].w[ws].l[ls] >= 97 && p[ps].s[ss].w[ws].l[ls] <= 122))
            {
                if (p[ps].s[ss].w[ws].l[ls]+key<= 90 || p[ps].s[ss].w[ws].l[ls] + key <= 122)
                {
                    p[ps].s[ss].w[ws].l[ls] += key;
                }
                else
                {
                    p[ps].s[ss].w[ws].l[ls] = p[ps].s[ss].w[ws].l[ls] - 26 + key;
                }
                
            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    void operator*(int key)
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if ((p[ps].s[ss].w[ws].l[ls] >= 65 && p[ps].s[ss].w[ws].l[ls] <= 90) || (p[ps].s[ss].w[ws].l[ls] >= 97 && p[ps].s[ss].w[ws].l[ls] <= 122))
            {
                if (p[ps].s[ss].w[ws].l[ls] - key < 65 ||( p[ps].s[ss].w[ws].l[ls] - key >90 && p[ps].s[ss].w[ws].l[ls] - key < 97))
                {
                    p[ps].s[ss].w[ws].l[ls] = p[ps].s[ss].w[ws].l[ls] + 26 - key;
                }
                else
                {
                    p[ps].s[ss].w[ws].l[ls] -= key;
                }

            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    bool operator!=(Text& obj)
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if (obj.p[ps].s[ss].w[ws].l[ls] == p[ps].s[ss].w[ws].l[ls] || obj.p[ps].s[ss].w[ws].l[ls] == p[ps].s[ss].w[ws].l[ls] - 32 || obj.p[ps].s[ss].w[ws].l[ls] == p[ps].s[ss].w[ws].l[ls] + 32)
            {

                return 0;

            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        return 1;
    }
    bool operator==(Text& obj)
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if (obj.p[ps].s[ss].w[ws].l[ls] != p[ps].s[ss].w[ws].l[ls])
            {
                if (obj.p[ps].s[ss].w[ws].l[ls] != p[ps].s[ss].w[ws].l[ls] + 32)
                {
                    if (obj.p[ps].s[ss].w[ws].l[ls] != p[ps].s[ss].w[ws].l[ls] - 32)
                    {
                        return 0;
                    }


                }

            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        return 1;
    }
    void checkspelling()//This function takes lower case words from dictionary note that the words in dictionary must be lower case!!!
    {
        ifstream fin("dictionary.txt");
        string dict[1000];
        int i,size=0; //size is for the size of indexes of array of string dicts in which dictionary words are saved
        if (fin.is_open())
        {
            for (i=0; !fin.eof(); i++)
            {
                fin >> dict[i];//saving in dict from file
               // cout << "'" << dict[i] << "'" << endl;
            }
            size = i;
        }
        else
        {
            cout << "File not Found: " << endl;
        }
        vector<char> copy;
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            copy.push_back(p[ps].s[ss].w[ws].l[ls]);//copying all words into vector for ease

            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        copy.push_back('\0');
        int len = copy.size();
        for (int k = 0; k < len; k++)
        {
            if (copy[k]>=65 && copy[k]<=90)
            {
                copy[k] += 32;//making all the character lower case
            }
        }

        string str = {};
        int x = 0;
        int flag = 0;
        
        //cout << "work" << endl;
        cout << "Words not in Dictionary: " << endl;
       // cout << size << endl;
        while (len!=x)
        {
            int count = 0;
            if ((copy[x] >= 65 && copy[x] <= 90) || (copy[x] >= 97 && copy[x] <= 122))
            {
                str = str + copy[x];

            }
            else if (copy[x]==' '||copy[x]=='\0'||copy[x]=='\n')
            {
                //str = str + '\0';
               // cout<<"'" << str <<"'"<< endl;
                for (int j = 0; j < size; j++)
                {
                    //int res = str.compare(dict[j]);
                    if (str==dict[j])
                    {
                        count++;
                        //cout << count << endl;
                    }

                }
                if (count==0)
                {
                    cout << str << endl;
                    flag++;
                }
                str.clear();
            }
            x++;
        }
        if (flag==0)
        {
            cout << "No incorrect/mispelled word found." << endl;
        }
    }
    void countletters()
    {
        int countl = 0, countp = 0;
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            if ((p[ps].s[ss].w[ws].l[ls] >= 65 && p[ps].s[ss].w[ws].l[ls] <= 90) || (p[ps].s[ss].w[ws].l[ls] >= 97 && p[ps].s[ss].w[ws].l[ls] <= 122))
            {
                countl++;
            }
            if ((p[ps].s[ss].w[ws].l[ls] >= 33 && p[ps].s[ss].w[ws].l[ls] <= 47) || (p[ps].s[ss].w[ws].l[ls] >= 58 && p[ps].s[ss].w[ws].l[ls] <= 64) || (p[ps].s[ss].w[ws].l[ls] >= 91 && p[ps].s[ss].w[ws].l[ls] <= 96))
            {
                countp++;
            }
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        cout << "Number of letters in the whole text are :" << countl << endl;
        cout << "Number of punctuations in the whole text are :" << countp << endl;
    }
   
    void countwords()
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {
            
            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                cout << "Words in sentence " << ss + 1 << " of paragrapgh " << ps + 1 << " are: " << ws + 1 << endl;

                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    void countsentences()
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {

            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {

                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                cout << "Sentences in paragraph " << ps + 1 << " are: " << ss + 1 << endl;

                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    void countparagraphs()
    {
        int ps = 0, ss = 0, ws = 0, ls = 0;
        while (p[ps].s[ss].w[ws].l[ls] != '\0')
        {

            ls++;
            if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {

                ss++;
                ls = 0;
                ws = 0;
            }
            else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {

                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
        cout << "Total paragraphs are " << ps << endl;
    }
    void frequency()
    {
        ofstream fout("frequency.txt");
        int countl = 0, countp = 0;
        int ps = 0, ss = 0, ws = 0, ls = 0;
        if (fout.is_open())
        {
            while (p[ps].s[ss].w[ws].l[ls] != '\0')
            {
                if ((p[ps].s[ss].w[ws].l[ls] >= 65 && p[ps].s[ss].w[ws].l[ls] <= 90) || (p[ps].s[ss].w[ws].l[ls] >= 97 && p[ps].s[ss].w[ws].l[ls] <= 122))
                {
                    countl++;
                }
                if ((p[ps].s[ss].w[ws].l[ls] >= 33 && p[ps].s[ss].w[ws].l[ls] <= 47) || (p[ps].s[ss].w[ws].l[ls] >= 58 && p[ps].s[ss].w[ws].l[ls] <= 64) || (p[ps].s[ss].w[ws].l[ls] >= 91 && p[ps].s[ss].w[ws].l[ls] <= 96))
                {
                    countp++;
                }
                ls++;
                if (p[ps].s[ss].w[ws].l[ls - 1] == ' ')
                {
                    fout << "Letters in word " << ws + 1 << " of sentence " << ss + 1 << " of paragraph " << ps + 1 << " are: " << ls << endl;

                    ws++;
                    ls = 0;
                }
                else if (p[ps].s[ss].w[ws].l[ls - 1] == '.')
                {
                    fout << "Words in sentence " << ss + 1 << " of paragrapgh " << ps + 1 << " are: " << ws + 1 << endl;

                    ss++;
                    ls = 0;
                    ws = 0;
                }
                else if (p[ps].s[ss].w[ws].l[ls - 1] == '\n')
                {
                    fout << "Sentences in paragraph " << ps + 1 << " are: " << ss + 1 << endl;
                    ps++;
                    ls = 0;
                    ws = 0;
                    ss = 0;
                }
            }
        }
        else
        {
            cout << "File not Found:" << endl;
        }

        fout << "Total paragraphs are " << ps << endl;
        fout << "Number of letters in the whole text are :" << countl << endl;
        fout << "Number of punctuations in the whole text are :" << countp << endl;
        fout.close();
        cout << "Frequency saves into file frequency.txt." << endl;
    }
};
ostream& operator<<(ostream& out, const Text& t)
{
    ofstream fout("output.txt");
    int ps = 0, ss = 0, ws = 0, ls = 0;
    while (t.p[ps].s[ss].w[ws].l[ls] != '\0')
    {
        fout << t.p[ps].s[ss].w[ws].l[ls];
        out << t.p[ps].s[ss].w[ws].l[ls];
        ls++;
        if (t.p[ps].s[ss].w[ws].l[ls-1] == ' ')
        {
            ws++;
            ls = 0;
        }
        else if (t.p[ps].s[ss].w[ws].l[ls-1] == '.')
        {
            ss++;
            ls = 0;
            ws = 0;
        }
        else if (t.p[ps].s[ss].w[ws].l[ls-1] == '\n')
        {
            ps++;
            ls = 0;
            ws = 0;
            ss = 0;
        }
    }
    out << endl;
    cout << "TEXT SAVED IN output.txt." << endl;
    fout.close();
    return out;
}
istream& operator>>(istream& in, Text& t)
{
    char filename[30];
    cout << "Enter filename to read text(add .txt add end): ";
    cin >> filename;
    int ps = 0, ss = 0, ws= 0, ls = 0;
    ifstream fin(filename);
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            t.p[ps].s[ss].w[ws].l[ls] = fin.get();
            
            ls++;
            if (t.p[ps].s[ss].w[ws].l[ls - 1] == ' ')
            {
                ws++;
                ls = 0;
            }
            else if (t.p[ps].s[ss].w[ws].l[ls - 1] == '.')
            {
                ss++;
                ls = 0;
                ws = 0;
            }
            else if (t.p[ps].s[ss].w[ws].l[ls - 1] == '\n')
            {
                ps++;
                ls = 0;
                ws = 0;
                ss = 0;
            }
        }
    }
    else
    {
        cout << "File not found!!" << endl;
    }
    fin.close();
    t.p[ps].s[ss].w[ws].l[ls] = '\0';
    return in;
}