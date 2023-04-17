// https://pl.spoj.com/problems/PTROL/

#include <iostream>

using namespace std;

void getTabElem(int tabElem, int *tab)
{
    for (int i = 0; i < tabElem; i++)
        cin >> tab[i];
}

void moveLeft(int tabElem, int *tab)
{
    int buffer = tab[0];

    for (int i = 0; i < tabElem - 1; i++)
        tab[i] = tab[i + 1];

    tab[tabElem - 1] = buffer;
}

void showTable(int tabElem, int *tab)
{
    for (int i = 0; i < tabElem; i++)
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
        moveLeft(tabElem, tab);
        showTable(tabElem, tab);
        cout << endl;

        delete [] tab;
        tab = NULL;
    }

    return 0;
}