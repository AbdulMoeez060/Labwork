#include"Paragraph.h"
using namespace std;

int main()
{
    Paragraph g;
    cin >> g;
    cout << "Paragrapph G read from file: " << endl;
    cout << g;
    Paragraph g2 = g;

    +g;
    cout << "Paragraph after all capitals G:" << endl;
    cout << g;
    cout << "Paragraph copied using copy constructor from G1 before capital letters, G2:" << endl;
    cout << g2;
    Paragraph g3;
    g3 = g;

    cout << "Paragraph copied using = operator from G1 after capital letters, G3:" << endl;
    cout << g3;
    cout << "Checking if G2 and G are equal: ";
    if (g2 == g)
    {
        cout << " Same." << endl;
    }
    else
    {
        cout << "Not same: " << endl;
    }
    g.countletters();
    g.countwords();
    g.countsentences();
    g.countparagraphs();
    return 0;
}