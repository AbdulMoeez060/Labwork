#include "Paragraph.h"

Paragraph::Paragraph()
{
	cout << "Constructing Paragraph..." << endl;
}
Paragraph::Paragraph(int pa, int se, int wo, int le) :p(pa), s(se), w(wo), l(le)
{
	cout << "Constructing Paragraph..." << endl;
    
}
Paragraph::Paragraph(const Paragraph& obj)
{
    int p = 0, s = 0, w = 0, l = 0;
    while (obj.pa[p][s][w][l] != '\0')
    {
        pa[p][s][w][l] = obj.pa[p][s][w][l];

        l++;
        if (obj.pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (obj.pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (obj.pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    pa[p][s][w][l] = '\0';
}
Paragraph::~Paragraph() { cout << "destruct paragraph." << endl; }
void Paragraph::operator=(Paragraph& obj)
{
    int p = 0, s = 0, w = 0, l = 0;
    while (obj.pa[p][s][w][l] != '\0')
    {
        pa[p][s][w][l] = obj.pa[p][s][w][l];

        l++;
        if (obj.pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (obj.pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (obj.pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    pa[p][s][w][l] = '\0';

}
void Paragraph::operator +()
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {
        //fout<<para.pa[p][s][w][l];
       // para[p][s][w][l]=fin.get();
       // out<<"para ["<<p<<"]["<<s<<"]["<<w<<"]["<<l<<"]: ";
        //out<<para.pa[p][s][w][l];
        if (pa[p][s][w][l] >= 97 && pa[p][s][w][l] <= 122)
        {
            pa[p][s][w][l] = pa[p][s][w][l] - 32;
        }

        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
}
void Paragraph::operator -()
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {
        //fout<<para.pa[p][s][w][l];
       // para[p][s][w][l]=fin.get();
       // out<<"para ["<<p<<"]["<<s<<"]["<<w<<"]["<<l<<"]: ";
        //out<<para.pa[p][s][w][l];
        if (pa[p][s][w][l] >= 65 && pa[p][s][w][l] <= 90)
        {
            pa[p][s][w][l] = pa[p][s][w][l] + 32;
        }

        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
}
bool Paragraph::operator!=(Paragraph& obj)
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {

        if (obj.pa[p][s][w][l] == pa[p][s][w][l] || obj.pa[p][s][w][l] == pa[p][s][w][l] - 32 || obj.pa[p][s][w][l] == pa[p][s][w][l] + 32)
        {

           // cout << obj.pa[p][s][w][l] << " and " << pa[p][s][w][l] << " same" << endl;
            return 0;

        }

        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    return 1;
}
bool Paragraph::operator==(Paragraph& obj)
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {

        if (obj.pa[p][s][w][l] != pa[p][s][w][l])
        {
            if (obj.pa[p][s][w][l] != pa[p][s][w][l] + 32)
            {
                if (obj.pa[p][s][w][l] != pa[p][s][w][l] - 32)
                {
                   // cout << obj.pa[p][s][w][l] << " and " << pa[p][s][w][l] << " not same" << endl;
                    return 0;
                }


            }

        }

        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    return 1;
}
ostream& operator<<(ostream& out, const Paragraph& para)
{
    ofstream fout("output.txt");
    int p = 0, s = 0, w = 0, l = 0;
    while (para.pa[p][s][w][l] != '\0')
    {
        fout << para.pa[p][s][w][l];
        // para[p][s][w][l]=fin.get();
        // out<<"para ["<<p<<"]["<<s<<"]["<<w<<"]["<<l<<"]: ";
        out << para.pa[p][s][w][l];
        l++;
        if (para.pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (para.pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (para.pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    out << endl;
    cout << "TEXT SAVED IN output.txt." << endl;
    fout.close();
    return out;
}
istream& operator>>(istream& in, Paragraph& para)
{
    char filename[30];
    cout << "Enter filename to read text(add .txt add end): ";
    cin >> filename;
    int p = 0, s = 0, w = 0, l = 0;
    ifstream fin(filename);
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            para.pa[p][s][w][l] = fin.get();
            /*cout << "para [" << p << "][" << s << "][" << w << "][" << l << "]: ";
            cout << para.pa[p][s][w][l] << endl;*/
            l++;
            if (para.pa[p][s][w][l - 1] == ' ')
            {
                w++;
                l = 0;
            }
            else if (para.pa[p][s][w][l - 1] == '.')
            {
                s++;
                l = 0;
                w = 0;
            }
            else if (para.pa[p][s][w][l - 1] == '\n')
            {
                p++;
                l = 0;
                w = 0;
                s = 0;
            }
        }
    }
    else
    {
        cout << "File not found!!" << endl;
    }
    fin.close();
    cout << endl;
    para.pa[p][s][w][l]='\0';
    return in;
}
void Paragraph::countletters()
{
    int p = 0, s = 0, w = 0, l = 0;
    int countw = 0, countp = 0;
    while (pa[p][s][w][l] != '\0')
    {
        if ((pa[p][s][w][l]>=65 && pa[p][s][w][l] <= 90)|| (pa[p][s][w][l] >= 97 && pa[p][s][w][l] <= 122))
        {
            countw++;
        }
        if ((pa[p][s][w][l] >= 33 && pa[p][s][w][l] <= 47) || (pa[p][s][w][l] >= 58 && pa[p][s][w][l] <= 64)|| (pa[p][s][w][l] >= 91 && pa[p][s][w][l] <= 96))
        {
            countp++;
        }

        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    cout << "Number of letters in the whole text are :" << countw << endl;
    cout << "Number of punctuations in the whole text are :" << countp << endl;

}
void Paragraph::countwords()
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {

        

        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            cout << "Words in sentence " << s + 1 << " of paragrapgh " << p + 1 << " are: " << w + 1 << endl;
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
}
void Paragraph::countsentences()
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {


        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            cout << "Sentences in paragraph " << p + 1  << " are: " << s + 1 << endl;
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
}
void Paragraph::countparagraphs()
{
    int p = 0, s = 0, w = 0, l = 0;
    while (pa[p][s][w][l] != '\0')
    {


        l++;
        if (pa[p][s][w][l - 1] == ' ')
        {
            w++;
            l = 0;
        }
        else if (pa[p][s][w][l - 1] == '.')
        {
            s++;
            l = 0;
            w = 0;
        }
        else if (pa[p][s][w][l - 1] == '\n')
        {
            p++;
            l = 0;
            w = 0;
            s = 0;
        }
    }
    cout << "Total paragraphs are " << p << endl;
}