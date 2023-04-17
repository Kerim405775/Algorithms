// http://pl.spoj.com/problems/PP0602A/

#include <iostream>

using namespace std;

void getTabElem(int tabElem, int *tab)
{
    for (int i = 0; i < tabElem; i++)
        cin >> tab[i];
}

void printEvenOdd(int tabElem, int *tab)
{
    for (int i = 1; i < tabElem; i += 2)
        cout << tab[i] << " ";
    
    for (int i = 0; i < tabElem; i += 2)
        cout << tab[i] << " ";
}


int main()
{
    int testCounter, tabElem;
    cin >> testCounter;

    for (int i = 0; i < testCounter; i++)
    {
        cin >> tabElem;
        int *tab = new int [tabElem];

        getTabElem(tabElem, tab);
        printEvenOdd(tabElem, tab);
        cout << endl;

        delete [] tab;
        tab = NULL;
    }

    return 0;
}